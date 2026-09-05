#include<stdio.h>
int primerange(int start,int end);
int prime(int i);
int main()
{
	int start, end;
	printf("Enter the value you start =");
	scanf("%d",&start);
	printf("Enater the value you stop =");
	scanf("%d",&end);
	primerange(start,end);
	return 0;
  }
 
int primerange(int start,int end)
{
  	for (int i=start; i<=end; i++)
  	{
   		if ( prime(i))
		 {

 		     printf("%d \n",i);
 		}
 	}
  
}

int prime(int n)
{
   	if (n<=1)
	   {
              return 0;
	   }

   for(int i=2; i*i<=n; i++)
	{
  	   if (n%i==0)
    		{
      		   return 0;
   		 }
	return 1;
 	}
}








