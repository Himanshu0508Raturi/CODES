//to input N numbers in an array then pass this array to a function and calculate the sum of 
//element of that array.
#include<stdio.h>
float sum(int [],int);
void main()
{
    int a[30],n;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    printf("Enter elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Sum is %f",sum(a,n));
}

float sum(int a[],int x)
{
    int s=0;
    for(int i=0;i<x;i++)
    {
        s=s+a[i];
    }
    return s;
}