#include<stdio.h>
int main()
{
    float a,b ;
    float result;
    printf("Enter 2 numbers=");
    scnaf("%f %f",&a,&b);
    result= printf("Calculation = %f",calculator(a,b));
}

float calculator(float a, float b)
{
    if(b==0)
    {
        error = 1;
    }
    else
    {
        return a/b;
    }
}