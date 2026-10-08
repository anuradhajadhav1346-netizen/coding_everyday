#include<stdio.h>
#define SIZE 5
struct arr_list
{
    int arr[SIZE];
    int size;
    int capacity;
};
int empty(struct arr_list *l1)
{
    if(l1->size==0)
    {
        return 1;
    }else{return 0;}
}
void delete_first(struct arr_list *l1)
{
    int i;
    printf("%d <- deleted..\n",l1->arr[0]);
    for(i=1; i<l1->size; i++)
    {
        l1->arr[i-1]=l1->arr[i];
    }
    l1->size--;
}

void delete_last(struct arr_list *l1)
{
    printf("%d <- deleted..\n",l1->arr[l1->size-1]);
    l1->size--;
}
void delete_pos(struct arr_list *l1,int pos)
{
    int i;
    if(pos<0 || pos>l1->size-1)
    {
        printf("Invalied position..\n");
    }
    else
    {
        printf("%d <- deleted..\n",l1->arr[pos]);
        for(i=pos; i<l1->size; i++)
        {
            l1->arr[i]=l1->arr[i+1];
        }
        l1->size--;
    }
}
int full(struct arr_list *l1)
{
    if(l1->size==l1->capacity)
    {return 1;}else{return 0;}
}
void display(struct arr_list *l1)
{
    int i;
    for(i=0; i<l1->size; i++)
    {
        printf("%d -> ",l1->arr[i]);
    }printf("NULL");
}
void insert_beg(struct arr_list *l1 , int data)
{
    int i;
    for(i=l1->size-1; i>=0; i--)
    {
        l1->arr[i+1]=l1->arr[i];
    }
    l1->arr[0]=data;
    l1->size++;
}
void insert_last(struct arr_list *l1 , int data)
{
    l1->arr[l1->size]=data;
    l1->size++;
}
void  insert_pos(struct arr_list *l1 , int data,int pos)
{
    int i;
    if(pos<0 || pos>l1->size)
    {
        printf("Invalied case..\n");
    }
    for(i=l1->size; i>=pos; i--)
    {
        l1->arr[i+1]=l1->arr[i];
    }
    l1->arr[pos]=data;
    l1->size++;
}
void init(struct arr_list *l1)
{
    l1->size=0;
    l1->capacity=SIZE;
}
int main()
{
    struct arr_list l1;
    init(&l1);
    int pos,data,ch;
    do
    {
       printf("\n<--------------------------------------->\n");
       printf("0.Exit list..\n1.Insert at beginning\n2.Insert at last\n3.Insert at position\n4.Delete at first\n5.Delete at last\n6.Delete at position\n7.Display list..\n");
       printf("\n<--------------------------------------->\n");
       printf("Enter your chice : \n");
       scanf("%d",&ch);
       switch (ch)
       {
       case 0:printf("Exiting list..\n");
        break;
       case 1: if(full(&l1))
				{
					printf("Array list is full..\n");
				}
				else{
                printf("Enter data : ");
                scanf("%d",&data);
                insert_beg(&l1, data);
                printf("Data added successfully at first..\n");
                }
                break;
        case 2: if(full(&l1))
				{
					printf("Array list is full..\n");
				}
				else{
                printf("Enter data : ");
                scanf("%d",&data);
                insert_last(&l1 , data);
                 printf("Data added successfully at last..\n");
                }
                break;
        case 3:if(full(&l1))
				{
					printf("Array list is full..\n");
				}
				else{
                 printf("Enter data : ");
                scanf("%d",&data);
                printf("Enter position : ");
                scanf("%d",&pos);
                insert_pos(&l1, data,pos);
                 printf("Data added successfully at given positionc..\n");
                }
                break;
        case 4 : if(empty(&l1))
                {
                    printf("Array list is empty..\n");
                }
                else
                {
                    delete_first(&l1);
                    printf("Data deleted successfully from first position..\n");
                }
                break;
        case 5:  if(empty(&l1))
                {
                    printf("Array list is empty..\n");
                }
                else
                {
                    delete_last(&l1);
                    printf("Data deleted successfully from last position..\n");
                }
                break;
        case 6 :  if(empty(&l1))
                {
                    printf("Array list is empty..\n");
                }
                else
                {
                    printf("Enter position :");
                    scanf("%d",&pos);
                    delete_pos(&l1,pos);
                    printf("Data deleted successfully from given position..\n");
                }
                break;
        case 7: if(empty(&l1))
                {
                    printf("Array list is full..\n");
                }
                else{
                    display(&l1);
                }
                break;
       default:printf("Invalied case.. please enter valied case..\n");
        break;
       }
       printf("Current list :\n");
       display(&l1);
    } while (ch!=0);
    return 0;
}