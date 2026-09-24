#include<stdio.h>
#include<stdlib.h>
int main(int argc[])
{
    printf("argc = %d\n",argc);
    float *marks;
    marks=(float *)malloc(sizeof(float) *5);
    int i;
    if(marks==NULL)
    {
        printf("memory allocation is failed..\n");
        return 1;
    }
    printf("Enter marks of sunjects :");
    for (i=0; i<5; i++)
    {
        scanf("%f",&marks[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("arr[%d] : %.2f\n",i,marks[i]);
    }
    free(marks);
    marks=NULL;
    return 0;
}