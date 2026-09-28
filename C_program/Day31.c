#include<stdio.h>
int linear_search(int arr[],int p,int k);
int main()
{
    int p;
    int k;
    printf("How many elements you want to enter:");
    scanf("%d",&p);
    int arr[p];
    printf("Enter elements:");
    int i;
    for(i=0; i<p; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Which element you want to search:");
    scanf("%d",&k);
    /*printf("Enter which occurance do you want to search:");
    scanf("%d",&n);*/
    int ret= linear_search(arr,p,k);
    if(ret==-1)
    {
        printf("your element occurce only once..\n");
    }
    else
    {
        printf("Your %d element occurance find at %d index..\n",k,ret);
    }
}

int linear_search(int arr[],int p,int k)
{
    int i;
    for(i=0; i<p; i++)
    {
        if(k==arr[i])
        {
            return i+1;
        }
    }
}