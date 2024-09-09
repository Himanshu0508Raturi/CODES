//input a matrix of order m*n.Print square of elements in principle diagonal.
#include<stdio.h>
#include<math.h>
void main()
{
    int a[30][30],m,n;
    printf("Enter row and column: \n");
    scanf("%d%d",&n,&m);
    printf("Enter elements: \n");
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
    //logic start here.for access of principle diagonal element. 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j)
            {
                a[i][j]=a[i][j]*a[i][j];
            }
        }
    }
    //logic for secondary diagonal elements.
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i+j == n-1)
            {
                a[i][j]=pow(a[i][j],3);     
            }
        }
    }
    //print array.
    printf("New elements are: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}