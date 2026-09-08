#include <stdio.h>
int fibonacci(int n);
int main()
{
  int n,i;
printf("Enter value of n=");
scanf("%d",&n);
if (n<=0)
{
printf ("Please enter positive number");
}
else{
      printf("Fibonacci series are=%d",fibonacci(n));
}
}
int fibonacci(int n)
{
  if(n==0)
{
  return 0;
}
else
if (n==1)
{
return 1;}
else
{
  return fibonacci(n-1)+fibonacci(n-2);
}
}