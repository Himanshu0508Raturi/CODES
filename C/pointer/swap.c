//program to swap two numbers using pointers.
#include<stdio.h>
void swap(float*,float*);
void main()
{
    float a,b;
    printf("Enter two numbers.\n");
    scanf("%f%f",&a,&b);
    swap(&a,&b);
    printf("After swapping A become %f and B become %f",a,b);

}

void swap(float *pa, float *pb)
{
    float temp;
    temp= *pa;
    *pa = *pb;
    *pb = temp;
} 