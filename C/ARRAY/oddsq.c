//to input n elements in an array and then replace all odd number of that array with their square.
#include<stdio.h>

void main()
{
    int a[20],n;
    printf("Enter limit of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(int i=0; i<n;i++)
    {
        scanf("%d",&a[i]);    
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            a[i]=a[i]*a[i];
        }
    }
    for(int i=0;i<n;i++)

{
    printf("%d ",a[i]);
}





}