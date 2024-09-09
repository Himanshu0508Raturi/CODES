//to input n elements in an array then store it and print it in reverse order without using 2rd array.
#include<stdio.h>
int pd(int);
void main()
{
    int a[20],n,temp;
    printf("Enter limit of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(int i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}