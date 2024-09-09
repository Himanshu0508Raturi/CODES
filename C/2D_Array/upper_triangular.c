//to input a square matrix of size N and then print elements of upper triangular to principle diagonal.
#include<stdio.h>

void main()
{
    int a[30][30];
    int i,j,n;
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
    printf("upper triangular form is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j)//for including principle diagonal{ if(i<=j) }.
            {
                printf("%d",a[i][j]);
            }else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
