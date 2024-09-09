//to printf sum of elements of 2D array.
#include<stdio.h>

void main()
{
   int a[30][30],n,m,sum=0;
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
            sum=sum+a[i][j];
        }
        printf("\n");
    }

    printf("\nSum is %d",sum);


}