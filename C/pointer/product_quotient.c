/* Design a UDF to find the product and quotient of two numbers passed to it from the calling 
program. Display the product and the quotient in the main program. Write a C program to 
read the two numbers in the main program & also display their product and quotient.
Implement using a pointer */
#include<stdio.h>
void cal(float,float,float*,float*);
void main()
{   
    float a,b,pro=0,quo=0;
    printf("Enter two numbers.\n");
    scanf("%f %f",&a,&b);
    cal(a,b,&pro,&quo);
    printf("product is %f and quotient is %f .\n",pro,quo);
}
void cal(float x,float y,float *pmul,float *pquo)
{
    *pmul=x*y;
    *pquo=x/y;
}