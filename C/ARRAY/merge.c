//input two array and merge it into 1st array.

#include<stdio.h>

void main()
{
    int a[10],b[10],n,m;
    printf("Enter limit of array A: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter limit of array B: ");
    scanf("%d",&m);
    printf("Enter elements: ");
    for(int i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0; i<m; i++)
    {
        a[i+n]=b[i];
    }
    for(int i=0;i<m+n;i++)
    {
        printf("%d ",a[i]);
    }



}