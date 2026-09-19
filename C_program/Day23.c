#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],j,ch;
    int count=0;
    printf("Enter string=");
    gets(str);
    printf("Enter character=");
    scanf("%c",&ch);
    for(j=0; str[j]!='\0'; i++)
    {
       if(str[j]==ch || str[j]== ch+32 || str[j]== ch-32)
       {
        count++;
       }
    }
    printf("%d",count);
    return 0;
}
