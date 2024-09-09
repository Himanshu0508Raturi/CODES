//to input integer number in two arrays of unequal size and calculate their index by index sum into
// third array.
#include<stdio.h>

void main()
{
    int a[30]={0},b[30]={0},c[30]={0},n,m;
    printf("Enter limit of array a: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter limit of array b: ");
    scanf("%d",&m);
    printf("Enter elements: ");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    if(n>m)
    {
        for(int i=0;i<n;i++)
        {
            c[i]=a[i]+b[i];
            printf("%d ",c[i]);
        }
    }else
    {
        for(int i=0;i<m;i++)
        {
            c[i]=a[i]+b[i];
            printf("%d ",c[i]);
        }
    }
}