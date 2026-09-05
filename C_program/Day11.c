#include<stdio.h>
int main()
{
    int n,i,count;
    printf("Enteer number =");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        if(n%i==0)
    count++;
    }
    if(count==2)
    {
        printf("Given number is prime number.");
    }
    else{
        printf("Given number is not a prime number.");
    }
}