#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,row,col;
    int **arr;
    printf("Enter rows and colums: ");
    scanf("%d %d",&row ,&col);
    arr=(int **)malloc(row * sizeof(int));
    //printf("%d",sizeof(int));
    for(i=0; i<row; i++)
        arr[i] = (int *)malloc(col * sizeof(int));

    printf("Enter elements : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d\t",arr[i][j]);
        }printf("\n");
    }
    for(i=0; i<row; i++)
    {
        free(arr[i]);
    }
    free(arr);
    return 0;
}