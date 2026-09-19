#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],i,ch;
    int count=0;
    printf("Enter string=");
    gets(str);
    printf("Enter character=");
    scanf("%c",&ch);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==ch || str[i]== ch+32 || str[i]== ch - 32)
        {  
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
