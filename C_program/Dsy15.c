#include<stdio.h>
int main()
{
    float a,b;
    char op;
    printf("Enter expressions:");
    scanf("%c",&op);
    printf("Enter any two numbers:");
    scanf("%f %f",&a,&b);
    int result = printf("Answers of your expression is = %d",calculate (a,b,op));
    return 0;
}

int calculate(float a,float b,char op)
{
    switch(op)
    {
        case'+': 
                    return a+b;
        case '-':
                    return a-b;
        case '*':
                    return a*b;
        case '/':
                    if(b!=0)
                    {
                        return a/b;
                    }
                    else
                    {
                        printf("Division is not allowed");
                        break;
                    }
        default: pritnf("Invalied opration");
    }
    
}