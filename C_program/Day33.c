#include<stdio.h>
void selection_sort(int arr[], int s);
void display_arr(int arr[], int s);
int main()
{
    int s;
    printf("How many numbers you want to enter : ");
    scanf("%d",&s);
    int arr[s];
    int i;
    printf("Enter numbers : ");
    for(i=0; i<s; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before sorting :\n");
    display_arr(arr,s);

    selection_sort(arr,s);
    printf("After sorting :\n");
    display_arr(arr, s);
    
}

void selection_sort(int arr[],int s)
{
    int i,j;
    int pass=0 , comp=0;
    for(i=0; i<=s-1; i++)
    {
        pass++;
        for(j=0; j<s; j++)
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

void display_arr(int arr[] , int s)
{
    int i; 
    for(i=0; i<s; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
}