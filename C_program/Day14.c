#include <stdio.h>
int fibonacci(int a);
int main()
{
  int a,i;
printf("Enter value of n=");
scanf("%d",&a);
if (a<=0)
{
printf ("Please enter positive number");
}
else{
      printf("Fibonacci series are=%d",fibonacci(a));
}
}
int fibonacci(int a)
{
  if(a==0)
{
  return 0;
}
else
if (a==1)
{
return 1;}
else
{
  return fibonacci(a-1)+fibonacci(a-2);
}
}