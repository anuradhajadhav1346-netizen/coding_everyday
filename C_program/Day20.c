#include<stdio.h>
void reversearr(int arr[], int n);

int main()
{
    int n,i;
    printf("How many elements you want to enter= ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter numbers= ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    reversearr(arr,n);
    printf("Reverse array elements are = ");
    for(i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}

void reversearr(int arr[],int n)
{
    int i=0,j=n-1,temp;
    while(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
        i++;
    }
}