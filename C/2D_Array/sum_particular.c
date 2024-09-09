//to find sum of a particular row or column.
#include<stdio.h>

void main()
{
    int a[30][30],n,sum=0;
    printf("Enter n: \n");
    scanf("%d",&n);
    printf("Enter Elements: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
           
        }
    }
    printf("Elements are: \n");
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum=sum+a[0][j];//sum of 0th row
        }
        break;
    }

    printf("\nSum of elements are: %d",sum);



}