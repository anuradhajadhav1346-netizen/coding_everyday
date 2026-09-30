#include<stdio.h>
void selection_sort(int arr[], int n);
void display_arr(int arr[], int n);
int main()
{
    int n;
    printf("How many numbers you want to enter : ");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter numbers : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before sorting :\n");
    display_arr(arr,n);

    selection_sort(arr,n);
    printf("After sorting :\n");
    display_arr(arr, n);
    
}

void selection_sort(int arr[],int n)
{
    int i,j;
    int pass=0 , comp=0;
    for(i=0; i<=n-1; i++)
    {
        pass++;
        for(j=0; j<n; j++)
        {
            comp++;
            if(arr[j]>arr[i])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }
    printf("\nSelection Sort\n");
    printf("Passes      : %d\n",pass);
    printf("Comparisons : %d\n",comp);

}

void display_arr(int arr[] , int n)
{
    int i; 
    for(i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
}