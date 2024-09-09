//to input N integer numbers in an array then calculate sum of elemenst of that array using pointers.
#include<stdio.h>

void main()
{
    int arr[20],n,i,*ptr,sum;
    printf("Enter number of elements.\n");
    scanf("%d",&n);
    printf("Enter elements.\n");
    ptr= &arr[0];
    for(i=0; i<n; i++)
    {
        scanf("%d", ptr+i);
        sum=sum + *(ptr+i);
    }
    printf("%d",sum);




}