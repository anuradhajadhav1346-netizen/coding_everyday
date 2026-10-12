
#include<stdio.h>
#include<stdlib.h>



typedef struct node
{
	int data;              
	struct node *prev;     
	struct node *next;     

}Node_t;


Node_t *head;

void init_list();

void insert_beg(int data);
void insert_last(int data);
void insert_pos(int data, int pos);

void delete_beg();
void delete_last();
void delete_pos(int pos);
void delete_all();

void traverse_list();
int count_list();


int main()
{
	int ch;
	int data;
	int pos;

	init_list();

	do
	{
		printf(" Doubly Linear Linked List (DLL)\n");
		printf("0. Exit\n");
		printf("1. Insert at Beginning\n");
		printf("2. Insert at Last\n");
		printf("3. Insert at Position\n");
		printf("4. Delete First\n");
		printf("5. Delete Last\n");
		printf("6. Delete at Position\n");
		printf("7. Traverse List\n");
		printf("8. Count Nodes\n");
		printf("9. Delete All\n");
		printf("-------------------------------------\n");
		printf("Enter Choice : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 0:
				printf("Thank You...\n");
				break;

			case 1:
				printf("Enter Data : ");
				scanf("%d",&data);
				insert_beg(data);
				break;

			case 2:
				printf("Enter Data : ");
				scanf("%d",&data);
				insert_last(data);
				break;

			case 3:
				printf("Enter Position : ");
				scanf("%d",&pos);

				printf("Enter Data : ");
				scanf("%d",&data);

				insert_pos(data,pos);
				break;

			case 4:
				delete_beg();
				break;

			case 5:
				delete_last();
				break;

			case 6:
				printf("Enter Position : ");
				scanf("%d",&pos);

				delete_pos(pos);
				break;

			case 7:
				printf("\nLinked List :\n");
				traverse_list();
				break;

			case 8:
				printf("Total Nodes : %d\n",count_list());
				break;

			case 9:
				delete_all();
				printf("All nodes deleted successfully.\n");
				break;

			default:
				printf("Invalid Choice.\n");
		}

	}while(ch != 0);

	return 0;
}



//------------------------------------------------------------
// Function : init_list()
// Purpose  : Initialize the Doubly Linked List.
//------------------------------------------------------------

void init_list()
{
	// Initially the list is empty.
	head = NULL;
}


void insert_beg(int data)
{
	
	Node_t *newnode;
	newnode = (Node_t *)malloc(sizeof(Node_t));

	newnode->data = data;
	newnode->prev = NULL;
	newnode->next = NULL;

	if(head == NULL)
	{
		head = newnode;
	}

	else
	{
		newnode->next = head;

		head->prev = newnode;
		head = newnode;
	}
}
void insert_last(int data)
{
	Node_t *newnode;
	newnode = (Node_t *)malloc(sizeof(Node_t));

	newnode->data = data;
	newnode->prev = NULL;
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

		// Step 5:Link the new node.
		newnode->prev = trav;
		trav->next = newnode;
	}
}


void traverse_list()
{
	if(head == NULL)
	{
		printf("List is empty.\n");
		return;
	}
	Node_t *trav = head;

	while(trav != NULL)
	{
		printf("%d -> ", trav->data);
		trav = trav->next;
	}
	printf("NULL\n");
}
int count_list()
{
	int cnt = 0;
	if(head == NULL)
	{
		return 0;
	}
	Node_t *trav = head;
	while(trav != NULL)
	{
		cnt++;
		trav = trav->next;
	}
	
	return cnt;
}

void insert_pos(int data, int pos)
{
	int cnt = count_list();

	if(pos == 1)
	{
		insert_beg(data);
		return;
	}
	else if(pos == cnt + 1)
	{
		insert_last(data);

		return;
	}

	else if(pos > 1 && pos <= cnt)
	{
		
		Node_t *newnode;
		newnode = (Node_t *)malloc(sizeof(Node_t));
		newnode->data = data;
		newnode->prev = NULL;
		newnode->next = NULL;

		
		Node_t *trav = head;
		int i = 1;
		while(i < pos - 1)
		{
			trav = trav->next;
			i++;
		}

		
		trav->next->prev = newnode;
		newnode->next = trav->next;
		newnode->prev = trav;
		trav->next = newnode;
	}

	else
	{
		printf("Invalid Position.\n");
	}
}

void delete_beg()
{
	if(head == NULL)
	{
		printf("List is empty.\n");
		return;
	}

	else if(head->next == NULL)
	{
		free(head);
		head = NULL;
	}

	else
	{
		Node_t *temp = head;
	
		head = head->next;
		head->prev = NULL;
		free(temp);
	}
}

void delete_last()
{
	if(head == NULL)
	{
		printf("List is empty.\n");
		return;
    }
	else if(head->next == NULL)
	{
		free(head);
		head = NULL;
	}

	else
	{
		Node_t *trav = head;
		while(trav->next->next != NULL)
		{
			trav = trav->next;
		}
		Node_t *temp = trav->next;
		trav->next = NULL;
		temp->prev = NULL;
		free(temp);
	}
}
void delete_pos(int pos)
{
	int cnt = count_list();

	if(pos == 1)
	{
		delete_beg();
		return;
	}
	else if(pos == cnt)
	{
		delete_last();
		return;
	}

	else if(pos > 1 && pos < cnt)
	{
		Node_t *trav = head;
		Node_t *temp;
		int i = 1;
		while(i < pos - 1)
		{
			trav = trav->next;
			i++;
		}

		temp = trav->next;
		temp->next->prev = trav;
		trav->next = temp->next;
		temp->prev = NULL;
		temp->next = NULL;
		free(temp);
	}
	else
	{
		printf("Invalid Position.\n");
	}
}
void delete_all()
{
	if(head == NULL)
	{
		printf("List is empty.\n");
		return;
	}
	while(head != NULL)
	{
		delete_beg();
	}
}

