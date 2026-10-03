#include<stdio.h>
#define size 5
struct linear
{
    int arr[size];
    int rear;
    int front;
};
void init_queue(struct linear *q1)
{
    q1->rear=q1->front=-1;
}
int isfull(struct linear *q1)
{
    if(q1->rear==size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 void enqueue(struct linear *q1,int data)
 {
    if(q1->front==-1 && q1->rear==-1)
    {
        q1->front=0;
        q1->rear=0;
        q1->arr[q1->rear]=data;
    }
    else
    {
        q1->arr[q1->rear]=data;
        q1->rear++;
    }
 }
int isempty(struct linear *q1)
{
    if(q1->rear==-1 && q1->front== -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

 int dequeue(struct linear *q1)
 {
    int temp=q1->arr[q1->front];
    printf("%d <- deleted..\n",temp);
    q1->front++;
    if(q1->front > q1->rear)
    {
        q1->front=-1;
        q1->rear=-1;
    }
 }
 int peek(struct linear *q1)
 {
    return q1->arr[q1->front];
 }
int main()
{
    struct linear q1;
    int data ,ch;
    init_queue(&q1);
    do
    {
       printf("0.Exit\n1.Enqueue\n2.Dequeue\n3.Peek\n");
       printf("Entr your choice : \n");
       scanf("%d",&ch);
       switch (ch)
       {
       case 0: printf("Exiting queue..\n");
                break;
        case 1: if(isfull(&q1))
                {
                    printf("Queue is ful..\n");
                }
                else
                {
                    printf("Enter data : \n");
                    scanf("%d",&data);
                    enqueue(&q1,data);
                    printf("Added data successfully..\n");
                }
                break;
        case 2: if(isempty(&q1))
                {
                    printf("Queue is empty..\n");
                }
                else
                {
                    dequeue(&q1);
                }
                break;
        case 3: if(isempty(&q1))
                {
                    printf("Queue is empty..\n");
                }
                else
                {
                    int ret=peek(&q1);
                    printf("%d\n",ret);
                }
                break;
       default: printf("Invalied choice. please enter correct choice..\n");
        break;
       }
       printf("Front= %d\n",q1.front);
       printf("Rear = %d\n",q1.rear);
    } while (ch!=0);
    return 0;
}
