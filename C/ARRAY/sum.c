//sum of element of array.
#include<stdio.h>

void main()
{
    int i,a[5],sum=0;
    printf("Enter 5 elements.\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
}