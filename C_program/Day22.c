#include<stdio.h>
int main()
{
    int n,i,sum = 0;
    printf("How many elements you want to enter=");
    scanf("%d",n);
    int a[n];
    printf("Enter elements=");
    for(i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int *ptr;
    ptr=a;
    for(i=0; i<n; i++)
    {
        sum+=(*(ptr+i));
    }
    printf("Sum of array elements = %d",sum);
    return 0;
}
