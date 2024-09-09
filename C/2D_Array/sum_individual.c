//to print sum of individual row and column of matrix.
//only for square matrix.
#include<stdio.h>

void main()
{
    int a[30][30],n,m,sr,sc;
    printf("Enter the number of rows and columns: \n");
    scanf("%d %d",&n,&m);
    printf("Enter Elements of matrix: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Elements are: \n");
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        sr=sc=0;
        for(int j=0;j<m;j++)
        {
            sr=sr+a[i][j];
            sc=sc+a[j][i];
        }
        printf("sum of row is: %d\n sum of column is: %d\n",sr,sc);
        }
}