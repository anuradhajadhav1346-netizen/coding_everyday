#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],i,j;
    printf("Enter string :");
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++)
    {
        int count=0;
        for(j=0; str[j]!='\0'; j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }

        if(count==1)
        {
            printf("Output=%c",str[i]);
            return 0;
        }
    }
    printf("Output=-1");
    return 0;
}