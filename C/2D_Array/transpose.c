//to print transpose of a matrix.
#include<stdio.h>

void main()
{
    int a[30][30],n,m;
    printf("Enter the number of rows and columns: \n");
    scanf("%d %d",&n,&m);
    printf("Enter Elements: \n");
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
    printf("Transpose of matrix is: \n");
     for(int i=0;i<m;i++)//in transpose row = colums.
    {
        for(int j=0;j<n;j++)//and columns = rows.
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }



}