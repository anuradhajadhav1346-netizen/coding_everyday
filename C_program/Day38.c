#include<stdio.h>
#define SIZE 5
struct item
{
    int value;
    int prio;
};
struct priority_q
{
    struct item arr[SIZE];
    int capacity;
    int size;
};

void init(struct priority_q *p1)
{
    p1->capacity=SIZE;
    p1->size=0;
}
int empty(struct priority_q *p1)
{
    if(p1->size==0)
    {return 1;}
    else{return 0;}
}
void dequeue(struct priority_q *p1)
{
    int i;
    if(empty(p1))
    {
        printf("Queue is empty..\n");
    }
    else{
        printf("%d <- data deleted..(priority=%d)\n",p1->arr[0].value,p1->arr[0].prio);
        for(i=1; i<p1->size; i++)
        {
            p1->arr[i-1]=p1->arr[i];
        }
        p1->size--;
    }
}
int full(struct priority_q *p1)
{
    if(p1->size == p1->capacity)
    {return 1;} 
    else {return 0;}
}
void enqueue(struct priority_q *p1,int data,int prio)
{
    int i,j;
    if(full(p1))
    {
        printf("Queue is full..\n");
    }
    else{
        for(i=0; i< p1->size; i++)
        {
            if(prio < p1->arr[i].prio)
            {
                for(j=p1->size; j>=i; j--)
                {
                    p1->arr[j+1]=p1->arr[j];
                }
            break;
            }
        }
    }
    p1->arr[i].value =data;
    p1->arr[i].prio = prio;
    p1->size++;
}
struct item  peek(struct priority_q *p1)
{
    return p1->arr[0];
}
void display_q(struct priority_q *p1)
{
    for(int i=0; i< p1->size; i++)
    {
        printf("Data : %d\n",p1->arr[i].value);
    }
}

int main()
{
    struct priority_q p1;
    init(&p1);
    int data,prio,ch;
    do
    {
        printf("\n<---------------------------------->\n");
        printf("0.Exit\n1.Enqueue\n2.Dequeue\n3.peek\n4.display\n");
        printf("<---------------------------------->\n");
        printf("Enter your choice..\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 0: printf("Exiting priority queue..\n");
            break;
            case 1: printf("Enter data : ");
                    scanf("%d",&data);
                    printf("Enter priority : ");
                    scanf("%d",&prio);
                    enqueue(&p1, data ,prio);
                    break;
            case 2: dequeue(&p1);
                    break;
            case 3: if(empty(&p1))
                    {
                        printf("Queue is empty..\n");
                    }
                    else{
                        struct item temp = peek(&p1);
                        printf("Value = %d  , priority = %d ",temp.value , temp.prio);
                    }
                    break;
            case 4: display_q(&p1);
                    break;
        default: printf("Invalied choice..\n");
            break;
        }
        printf("Size = %d\n",p1.size);
    } while (ch!=0);
    return 0;
}