#include <stdio.h>
int main()
{
	 int a ,b, c;
	 printf (" Enter three numbers=");
	 scanf(" %d %d %d", &a , &b , &c);
	 if(a>b && a>c)
	 {
	 	printf (" %d is a greater number",a);
	 }else
	 if (b>a && b>c)
	 {
	 	printf ("%d is a greater number",b );
	 }
	 else 
	 {
	 	printf("%d is a greater number",c);
	 }
	 return 0;
}