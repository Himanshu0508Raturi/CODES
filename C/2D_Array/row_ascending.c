//write a c program to arrange row element in ascending order.
#include<stdio.h>

void main()
{
    int a[30][30],m,n,temp;
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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
          for(int k = j+1 ;k<m ; k++)
          {
            if(a[i][j]>a[i][k])
            {
                temp=a[i][j];
                a[i][j]=a[i][k];
                a[i][k]=temp;
            }
          }
        }
    }
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