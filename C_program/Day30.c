#include<stdio.h>
int binary_search(int arr[], int n, int key);
int main()
{
    int arr[10];
    int i;
    printf("Enter array elements seqential in desending order : ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter which element you want to search:");
    scanf("%d",&key);
    int ret= binary_search(arr,10,key);
    if(ret==-1)
    {
        printf("Element is not found..\n");
    }
    else
    {
        printf("Your element is foud at %d position..\n",ret);
    }
}

int binary_search(int arr[],int n, int key )
{
    int left=0;
    int right=n-1;
    int mid;
    while(right>left)
    {
        mid=(left+right)/2;
        if(arr[mid]==key)
        {
            return mid+1;
        }
        else if(arr[mid]>key)
        {
            left=mid;
        }
        else
        if(arr[mid]<key)
        {
            right=mid-1;
        }

    }
}