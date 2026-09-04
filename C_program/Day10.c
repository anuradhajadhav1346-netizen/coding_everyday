#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i;
    printf("Enter value for fibonacci seris=");
    scanf("%d",&n);
    printf("Fibonacci seris are= 0\t1");
    for(i=1; i<=n-2; i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    return 0;
}