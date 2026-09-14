#include<stdio.h>
int main()
{
    int n,m,i,found=0;
    printf("How many elements you wnat to enter=");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements =");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search=");
    scanf("%d",&m);
    int *ptr;
    ptr=a;
    for(i=0; i<n; i++)
    {
        if(*(ptr+i)==m)
        {
            printf("Your elements is =%d\n",m);
            found=1;
            break;
        }
    }
    if(found == 0)
    {
        printf("Your number is not found.\n");
    }
    return 0;
}