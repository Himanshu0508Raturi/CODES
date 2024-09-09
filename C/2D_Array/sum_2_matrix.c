//to print sum of two square matrix.
#include<stdio.h>

void main()
{
    int a[30][30],b[30][30],c[30][30],n1,m1,n2,m2;
    printf("Enter number of rows and column for matrix 1: \n");
    scanf("%d%d",&n1,&m1);
    printf("Enter number of rows and column for matrix 2: \n");
    scanf("%d%d",&n2,&m2);
    printf("Enter Elements of matrix A: \n");
    if(n1==n2 && m1==m2)
    {
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            scanf("%d",&a[i][j]);
           
        }
    }
    printf("Enter Elements of matrix B: \n");
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<m2;j++)
        {
            scanf("%d",&b[i][j]);
           
        }
    }
    printf("Elements of A are: \n");
     for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Elements of B are: \n");
     for(int i=0;i<n2;i++)
    {
        for(int j=0;j<m2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum of both matrix are: \n");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    }else
    {
    printf(" Addition Not possible:\n");
    }
}