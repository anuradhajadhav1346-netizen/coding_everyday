#include<stdio.h>
#include<string.h>
int main(int argc[],char *argv[])
{
    printf("argc=%d\n",argc);
    int num1 = atoi (argv[1]);
    int num2 = atoi (argv[3]);
    switch((*argv[2]))
    {
        case '+' : printf("%d + %d = %d \n",num1,num2,num1+num2);
                break;
        case '-' :  printf("%d - %d = %d \n",num1,num2,num1-num2);
                break;
        case '*' :  printf("%d * %d = %d \n",num1,num2,num1*num2);
                break;
        case '/' :  printf("%d / %d = %d \n",num1,num2,num1/num2);
                break;
    }
}