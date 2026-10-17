#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *prev;
	struct node *next;

}Node_t;
Node_t *head;

void init_list()
{
	head = NULL;
}
void insert_first(int data)
{
	Node_t *newnode = (Node_t *)malloc(sizeof(Node_t));

	newnode->data = data;
	newnode->prev = NULL;
	newnode->next = NULL;
	if(head == NULL)
	{
		head = newnode;

		newnode->next = head;
		newnode->prev = head;
	}
	else
	{
		Node_t *last = head->prev;

		last->next = newnode;

		newnode->prev = last;
		newnode->next = head;

		head->prev = newnode;
		head = newnode;
	}
}
void insert_last(int data)
{
	Node_t *newnode = (Node_t *)malloc(sizeof(Node_t));

	newnode->data = data;
	newnode->prev = NULL;
	newnode->next = NULL;
	if(head == NULL)
	{
		head = newnode;

		newnode->next = head;
		newnode->prev = head;
	}
	else
	{
		Node_t *last = head->prev;
		last->next = newnode;

		newnode->prev = last;
		newnode->next = head;

		head->prev = newnode;
	}
}

void traverse_fwd()
{

	if(head == NULL)
	{
		printf("List is Empty.\n");
		return;
	}
	Node_t *trav = head;

	do
	{
		printf("%d -> ", trav->data);
		trav = trav->next;

	}while(trav != head);

	printf("\n");
}
int count_node()
{
	int cnt = 0;
	if(head == NULL)
	{
		return 0;
	}

	Node_t *trav = head;
	do
	{
		cnt++;

		trav = trav->next;

	}while(trav != head);
	return cnt;
}
void insert_pos(int data, int pos)
{
    int cnt = count_node();
	if(pos == 1)
	{
		insert_first(data);
		return;
	}
	else if(pos == (cnt + 1))
	{
		insert_last(data);
		return;
    }
	else if(pos > 1 && pos <= cnt )
	{
		Node_t *newnode = (Node_t *)malloc(sizeof(Node_t));

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
		newnode->prev = trav;
		newnode->next = trav->next;

		trav->next->prev = newnode;
		trav->next = newnode;
	}
	else
	{
		printf("Invalid Position.\n");
	}
}
void delete_first()
{
	if(head == NULL)
	{
		printf("List is Empty.\n");
		return;
    }
	else if(head->next == head)
	{
		free(head);
		head = NULL;
	}
	else
	{
		Node_t *temp = head;
		Node_t *last = head->prev;

		head = head->next;

		head->prev = last;
		last->next = head;

		free(temp);
	}
}
void delete_last()
{
	if(head == NULL)
	{
		printf("List is Empty.\n");
		return;
	}
	else if(head->next == head)
	{
		free(head);
		head = NULL;
	}
	else
	{
		Node_t *last = head->prev;
		Node_t *prev = last->prev;

		prev->next = head;
		head->prev = prev;

		free(last);
	}
}
void delete_pos(int pos)
{
    int cnt = count_node();
	if(pos == 1)
	{
		delete_first();
		return;
	}
	else if(pos == cnt )
	{
		delete_last();
		return;
	}
	else if(pos > 1 && pos < cnt )
	{
		Node_t *trav = head;
		int i = 1;
		while(i < pos)
		{
			trav = trav->next;
			i++;
		}
		trav->prev->next = trav->next;
		trav->next->prev = trav->prev;

		free(trav);
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
		printf("List is Empty.\n");
		return;
	}
	while(head != NULL)
	{
		delete_first();
	}
}
void traverse_back()
{
	if(head == NULL)
	{
		printf("List is Empty.\n");
		return;
	}

	Node_t *trav = head->prev;
	do
	{
		printf("%d -> ", trav->data);
		trav = trav->prev;

	}while(trav != head->prev);

	printf("\n");
}
int main()
{
	int ch;
	int data;
	int pos;

	init_list();

	do
	{
        printf("-------------------------------------------------\n");
		printf(" Doubly Circular Linked List (DCLL)\n");
        printf("-------------------------------------------------\n");
		printf("0. Exit\n");
		printf("1. Insert First\n");
		printf("2. Insert Last\n");
		printf("3. Insert At Position\n");
		printf("4. Delete First\n");
		printf("5. Delete Last\n");
		printf("6. Delete At Position\n");
		printf("7. Traverse Forward\n");
		printf("8. Traverse Backward\n");
		printf("9. Count Nodes\n");
		printf("10. Delete All\n");
		printf("-----------------------------------------\n");
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

				insert_first(data);
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

				insert_pos(data, pos);
				break;

			case 4:
				delete_first();
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
				printf("\nForward Traversal :\n");
				traverse_fwd();
				break;

			case 8:
				printf("\nBackward Traversal :\n");
				traverse_back();
				break;

			case 9:
				printf("Total Nodes : %d\n", count_node());
				break;

			case 10:
				delete_all();
				printf("All nodes deleted successfully.\n");
				break;

			default:
				printf("Invalid Choice...\n");
		}

	}while(ch != 0);

	return 0;
}