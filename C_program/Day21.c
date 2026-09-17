#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
    int *ptr;
    printf("Enter how many elements you want to enter =");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements=");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    for(i=0; i<n; i++)
    {
        if(*(ptr+i)%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even elements are= %d",even);
    printf("Odd elements are = %d",odd);
    return 0;
}
