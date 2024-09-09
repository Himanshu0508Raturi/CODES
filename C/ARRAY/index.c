//to input integer number in an array then calculate sum of even indexes elements of that array.
#include<stdio.h>

void main()
{
    int a[20],sum=0,n;
    printf("Enter limit of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(int i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        {
            sum =sum+a[i];
        }
    }
    printf("%d",sum);
}