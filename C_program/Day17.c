#include<stdio.h>
int main()
{
    int n;
    printf("How many subjects marks you want to enter=");
    scanf("%d",&n);
    int i,arr[n],sum=0;
    float avg;
    printf("Enter marks of  subjects=");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum= sum+arr[i];
    }
    avg=sum/5;
    printf("Average of 5 subjrcts is=%f",avg);
}