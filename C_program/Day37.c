#include<stdio.h>
#define size 5
struct circular
{
    int rear;
    int front;
    int arr[size];
};
void init_queue( struct circular *c1)
{
    c1->rear=-1;
    c1->front=-1;
}
int full(struct circular *c1)
{
    if(c1->rear==size-1 && c1->front==-1 || c1->front == (c1->rear+1))
    {return 1;}else{return 0;}
}
void enqqueue(struct circular *c1, int data)
{
    if(c1->rear==-1 && c1->front==-1)
    {
        c1->rear=0;
        c1->front=0;
        c1->arr[c1->rear]=data;
    }
    else{
        c1->rear= (c1->rear+1)%size;
        c1->arr[c1->rear]=data;
    }
}
int  empty(struct circular *c1)
{
    if(c1->rear==-1 )
    {return 1;}else{return 0;}
}
void dequeue(struct circular *c1)
{
    int temp = c1->arr[c1->front];
    printf("%d <- deleted..\n",temp);;
    if(c1->front > c1->rear)
    {
        c1->front=-1;
        c1->rear=-1;
    }
    else
    {
        c1->front=(c1->front+1)%size;
    }
}
int peek(struct circular *c1)
{
    return c1->arr[c1->front];
}
int main()
{
    struct circular c1;
    int data,ch;
    init_queue(&c1);
    do
    {
       printf("\n<---------Queue oprations.------------------>\n");
       printf("0.Exit\n1.Enqueue\n2.Dequeue\n3.Peek\n");
       printf("<---------Queue oprations.------------------>\n");
       printf("Enter your choice : ");
       scanf("%d",&ch);
       switch (ch)
       {
       case 0: printf("Exiting circular queue..\n");
                break;
        case 1: if(full(&c1))
                {
                    printf("Queue is full..\n");
                }
                else
                {
                    printf("Enter data for enqueue..\n");
                scanf("%d",&data);
                enqqueue(&c1,data);
                printf("Data added successfully..\n");
                }
                break;
        case 2: if(empty(&c1))
                {
                    printf("Queue is empty..\n");
                }
                else
                {
                    dequeue(&c1);
                    printf("Data deleted successfully from front..\n");
                }
                break;
        case 3:if(empty(&c1))
                {
                    printf("Queue is empty..\n");
                }
                else
                {
                    int ret =peek(&c1);
                    printf("%d <- Data at front..\n",ret);
                }
                break;
       
       default:printf("Invalid case. please enter valied case..\n");
        break;
       }
    } while (ch!=0);
    return 0;
}
