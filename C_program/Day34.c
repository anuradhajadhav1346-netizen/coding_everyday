#include<stdio.h>
void insertion_sort(int arr[],int n)
{
    int i,j,key;
    for(i=1; i<n; i++)
    {
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]<key)
        {
           arr[j+1]=arr[j];
        }
        arr[j]=key;
    }
}
void print_sort(int arr[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }printf("\n");
}

int main()
{
    int n;
    printf("How many elements you want to enter:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:");
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before sroting:");
    print_sort(arr ,n);
    insertion_sort(arr,n);
    printf("Sorted array : ");
    print_sort(arr,n);

}