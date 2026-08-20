#include <stdio.h>
int main()
{
	int num, temp, digit, reverse=0;
	printf(" Enter any number=");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		digit=num%10;
		reverse=reverse*10+digit;
		num=num/10;
	}
	if(temp==reverse)
	{
		printf("Given number is palindrom");		
	}
	else
	{
		printf("Given number is not palindrom.");
	}
	return 0;
}