//to input n different number in an array then input a number to delete from that array.
#include<stdio.h>

void main()
{
    int a[30],n,key,flag=0;
    printf("Enter limit of array a: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number to delete: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
       if(a[i]==key)
       {
        for(int j=i;j<n;j++)
        {
            a[j]=a[j+1];
        }
        flag=1;
    }
    }
    if(flag==0)
    {
        printf("Number not exist.");
    }else
    {
        for(int i=0;i<n-1;i++)
        {
            printf("%d ",a[i]);
        }
    }

}