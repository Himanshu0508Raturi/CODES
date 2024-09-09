//q5 of tcs assignment.
#include<stdio.h>

void main()
{
    int a[10],b[10],r[20],n,m,k=0,temp;
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
    for(int i=0; i<n; i++,k++)//1st array merge.
    {
        r[k]=a[i];
    }
    for(int j=0;j<m;j++,k++)//2nd array merge.
    {
        r[k]=b[j];
    }
    printf("Elements before sorting are.\n");
    for(int i=0; i<m+n; i++)
    {
        printf("%d ",r[i]);
    }
    
    for(int i=0; i<n+m; i++)
    {
        for(int j=0; j<(n+m)-1;j++)//because of (n+m) elements in r[].
        {
            if(r[j]>r[j+1])
            {
                temp=r[j];
                r[j]=r[j+1];
                r[j+1]=temp;
            }
        }
    }
    printf("\narray after sorting is.\n");
    for(int i=0; i<k;i++)
    {
        printf("%d ",r[i]);
    }
    }