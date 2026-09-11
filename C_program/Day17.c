#include<stdio.h>
int main()
{
    int i,arr[5],sum=0;
    float avg;
    printf("Enter marks of 5 subjects=");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<5; i++)
    {
        sum= sum+arr[i];
    }
    avg=sum/5;
    printf("Average of 5 subjrcts is=%f",avg);
}