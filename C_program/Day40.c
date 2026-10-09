#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}Node_t;
 
Node_t *head;

void init()
{
	head == NULL;
}

void insert_beg(int data)
{
	Node_t *newnode;
	newnode = (Node_t *)malloc(sizeof(Node_t));
	newnode->data = data;
	newnode->next = NULL;
	if(head == NULL)
	{
		head = newnode;
	}
	else 
	{
		newnode->next = head ;
		head = newnode;
	}
}

void insert_last(int data)
{
	Node_t *newnode;
	newnode = (Node_t *)malloc(sizeof(Node_t));
	newnode->data = data;
	newnode->next = NULL;
	if(head == NULL)
	{
		head = newnode;
	}
	else 
	{
		Node_t *trav = head;
		while(trav->next != NULL)
		{
			trav = trav->next;
		}
		trav->next = newnode;
	}
}

int count_node()
{
	int cnt=0;
	Node_t *trav = head;
	if(head == NULL)
	{	
		return cnt;
	}
	while(trav != NULL)
	{
		cnt++;
		trav = trav->next;
	}return cnt;
	
}

void insert_pos(int data, int pos)
{
	Node_t *newnode;
	newnode = (Node_t *)malloc(sizeof(Node_t));
	newnode->data = data;
	newnode->next = NULL;
	if(head == NULL)
	{
		head = newnode;
	}
	else	if(pos == 1)
		{
			insert_beg(data);	
		}
	else	if (pos == count_node() + 1)
		{	
			insert_last(data);
		}
		else	if(pos >1 && pos <= count_node())
			{
				Node_t *trav = head;
				int i=1;
				while(i < pos-1)
				{
					trav = trav->next;
				}
				newnode->next = trav->next;
				trav->next = newnode;
			}
}

void delete_first()
{
	Node_t *temp = head;
	head = head->next;
	free(temp);
}

void delete_last()
{
	Node_t *temp;
	Node_t *trav = head;
	while(trav->next->next != NULL)
	{
		trav = trav->next;
	}
	temp = trav->next;
	trav->next = NULL;
	free(temp);
}
void  traverse()
{
	Node_t *trav = head;
	while(trav != NULL)
	{
		printf("%d ->",trav->data);
		trav = trav->next;
	}printf("NULL\n");
}

void delete_pos(int pos)
{
	if(pos == 1 )
	{
		delete_first();
	}
	else	if(pos == count_node())
	{
		delete_last();

	}
	else	if(pos > 1 && pos < count_node())
	{
		Node_t *temp;
		Node_t *trav =head;
		int i=1;
		while(i < pos-1)
		{
			trav = trav->next;
		}
		temp = trav->next;
		trav->next = temp->next ;
		free(temp);
	}
}


void delete_all()
{
	if(head == NULL)
	{
		printf("List is empty..\n");
	}
	while(head != NULL)
	{
		delete_first();
	}
}


int main()
{
	int data, pos,ch;
	init();
	do
	{
		printf("\n<----------------------------->\n");
		printf("0.exit\n1.Insert at beg.\n2.insert at last\n3.insert at position\n4.delete at first\n5.delete at last\n6.delete at position\n7.trverse\n8.delete all\n9.count\n");
		printf("\n<----------------------------->\n");
		printf("Enter your choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0: printf("Thank you..\n");
				break;

			case 1: printf("Enter data=");
				scanf("%d",&data);
				insert_beg(data);
				printf("Data added successfully..\n");
				break;

			case 2:  printf("Enter data=");
				scanf("%d",&data);
				insert_last(data);
				printf("Data added successfully..\n");
				break;

			case 3: printf("Enter data=");
				scanf("%d",&data);
				printf("Enter position=");
				scanf("%d",&pos);
				insert_pos(data,pos);
				printf("Data added successfully..\n");
				break;

			case 4: delete_first();
				break;

			case 5: delete_last();
				break;

			case 6: printf("Enter position= ");
				scanf("%d",&pos);
				delete_pos(pos);
				break;

			case 7: traverse();
				break;

			case 8: delete_all();
				break; 

			case 9: printf("total count = %d",count_node());
				break;
		} printf("Current list = ");
		traverse();
		printf("count = %d",count_node());
	}while(ch != 0);
return 0;
}
			













