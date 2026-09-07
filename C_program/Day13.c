#include<stdio.h>
void binary(int n);
int main()
{
 int n;
 printf("Enter a number:");
 scanf("%d",&n);
 binary(n);
 return 0;
}
void binary(int n)
{
  if(n==0)
  return 0;
  binary(n/2);
  printf("%d",n%2);
     
  
  }
