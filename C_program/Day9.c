#include <stdio.h>
int main()
{
    int a,b,result=1,i;
    printf("Enteer base value : ");
    scanf("%d",&a);
    printf("Enter index value : ");
    scanf("%d",&b);
    for(i=1; i<=b; i++)
    {
        result=result*a;
    }
    printf("Power of base to the index is = %d",result);

}