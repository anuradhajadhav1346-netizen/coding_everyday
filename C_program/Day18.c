#include<stdio.h>
int max(int arr[],int size);
int min(int arr[],int size);
int main()
{
    int arr[5],i;
    printf("Enter any 5 numbers=");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Maaximum number is = %d\n",max(arr,5));
    printf("Minimum number is = %d\n",min(arr,5));
}

int max(int arr[],int size)
{
    int i,max=arr[0];
    for(i=0; i<size; i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}

int min(int arr[],int size)
{
    int i,min=arr[0];
    for(i=0; i<size; i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}