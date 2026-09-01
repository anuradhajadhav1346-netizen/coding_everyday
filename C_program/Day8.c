#include <stdio.h>
int main()
{
 int n , fact=1,i;
printf("Enter number=");
scanf("%d",&n);
for (i=1; i<=n; i++)
{
   fact= fact*i;
}
printf("factorial of a given number is=%d",fact);

return 0;
}