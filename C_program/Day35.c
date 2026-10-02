#include<stdio.h>
#define size 5
struct stack
{
    int arr[size];
    int top;
};
void init_stack(struct stack *s1)
{
    s1->top=-1;
}
int stack_full(struct stack *s1)
{
    if((s1->top)==size-1)
    {return 1;}
    else{return 0;}
}

void push_stack( struct stack *s1, int data)
{
    if(stack_full(s1))
    {
        printf("Stack is full..\n");
    }
    else{
        (s1->top)++;
        s1->arr[s1->top]=data;
    }
}
int stack_empty(struct stack *s1)
{
    if((s1->top)==-1)
    {
        return 1;
    }
    else{return 0;}
}
void pop_stack(struct stack *s1)
{
    if(stack_empty(s1))
    {
        printf("Stack is empty..\n");
    }
    else
    {
        printf("%d <- deleted data\n",s1->arr[s1->top]);
        (s1->top)--;
    }
}
int peek_stack(struct stack *s1)
{
    return s1->arr[s1->top];
}

int main()
{
    struct stack s1;
    int ch,data;
    init_stack(&s1);
    do
    {
       printf("\n0.Exit\n1.Push the value\n2.Pop the value\n3.Peek the value\n");
       printf("Enter your choice..\n");
       scanf("%d",&ch);
       switch (ch)
       {
        case 0:printf("Exiting from stack..\n");
                break;
        case 1: printf("Enter value for push : \n");
                scanf("%d",&data);
                push_stack(&s1,data);
                printf("Data added successfully..\n");
                break;
        case 2:pop_stack(&s1);
                break;
        case 3: if(stack_empty(&s1))
                {
                    printf("Stack is empty..\n");
                }
                else
                {
                    data=peek_stack(&s1);
                    printf("Peek value : %d\n",data);
                }
                break;
        default:printf("Invalid choice..\n");
                break;
       }
        printf("Top=%d\n",s1.top);
    } while (ch!=0);
    return 0;
    
}
