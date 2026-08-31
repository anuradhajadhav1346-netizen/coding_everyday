# include<stdio.h>
int main()
{
 int n, temp,digit, reverse=0;
printf(" Enter any number=");
scanf("%d",&n);
temp=n;
while(n>0)
{
  digit=n%10;
reverse= reverse*10+digit;
n/=10;
}
printf("reverse number is=%d",reverse);
}