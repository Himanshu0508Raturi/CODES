//program to swap principle diagonal element in a square 2d matrix.
#include<stdio.h>

void main()
{
    int a[30][30],i,j,n,temp=0;
    printf("Enter order of matrix: \n");
    scanf("%d",&n);
    printf("Enter elements: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Elements are: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //swap logic.
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                temp=a[i][j];
                a[i][j]=a[n-1][n-1];
                a[n-1][n-1]=temp;
            }
            break;
        }
    }
    printf("Elements are: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}