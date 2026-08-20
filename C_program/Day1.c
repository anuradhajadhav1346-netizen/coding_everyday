#include <stdio.h>
float main()
{
int a , b ;
 float result;
 printf (" Enter first no.=");
 scanf (" %d", &a);
 printf (" Enter second no.=");
 scanf (" %d",&b);
 if(b==0)
 {
 	printf (" Division can not be ditected");
 }
 else
 {
 	result=a/b;
 }
 printf (" division of 2 numbers is= %.2f", result);
 return 0;
}