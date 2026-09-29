#include<stdio.h>
void bubble_sort(int arr[], int r);
void print_sort(int arr[], int r);
int flag =0;
int main()
{
    int r;
    printf("Enter how many elements you want to enter :");
    scanf("%d",&r);
    int arr[r];
    int i;
    printf("Enter elements :");
    for(i=0; i<r; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before sorted array is:\n");
    print_sort(arr,r);
    bubble_sort(arr,r);
    printf("\nAfter sorted array is :\n");
    print_sort(arr,r);
    return 0;
}

void bubble_sort(int arr[], int r)
{
    int i,j;
    for(i=0; i<r-1; i++)
    {
        for(j=0; j<r; j++)
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

void print_sort(int arr[], int r)
{
    int i;
    for(i=0; i<r; i++)
    {
        printf("%d\n",arr[i]);
    }
}