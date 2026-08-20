#include<stdio.h>

int main()
{
   
	float a,b;
	char op;
	printf("Enter expressions (+,-,*,/):");
	scanf("%c",&op);
	printf("enter 2 numbers=");
 	scanf("%f %f",&a,&b);
	switch(op)
	{
  		case'+':
   			printf("result=%.2f",a + b);
			break;

		case'-':
 			printf("result=%.2f",a - b);
			break;

		case'*':
			printf("result=%.2f",a * b);
			break;

		case'/':
			if (b!=0)
			printf("result=%.2f",a / b);
			else
			printf("Division is not allowed");
			break;
		default:
			printf("Invalied opretion");

	}
return 0;
}