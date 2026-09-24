#include<stdio.h>
#include<stdlib.h>
int main (int argc[])
{
    printf("argc = %d\n",argc);
    float *mark;
    mark=(float *)malloc(sizeof(float) *5);
    int i;
    if(mark==NULL)
    {
        printf("memory allocation is failed..\n");
        return 1;
    }
    printf("Enter marks of sunjects :");
    for (i=0; i<5; i++)
    {
        scanf("%f",&mark[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("arr[%d] : %.2f\n",i,mark[i]);
    }
    free(mark);
    marks=NULL;
    return 0;
}