#include<stdio.h>
void bubble_sort(int arr[], int n);
void print_sort(int arr[], int n);
int flag =0;
int main()
{
    int n;
    printf("Enter how many elements you want to enter :");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter elements :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before sorted array is:\n");
    print_sort(arr,n);
    bubble_sort(arr,n);
    printf("\nAfter sorted array is :\n");
    print_sort(arr,n);
    return 0;
}

void bubble_sort(int arr[], int n)
{
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag =1;
            }
        }
    }
    if(flag==0)
    {
        printf("Elements can be reached..\n");
    }
}

void print_sort(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
}