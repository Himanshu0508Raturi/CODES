//to print the sum of principle diagonal of square matrix.
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
    printf("Principle Diagonal elements are: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            i=j;
            printf("%d ",a[i][j]);
            sum=sum+a[i][j];
        }
        
    }

    printf("\nSum of principle elements are: %d",sum);



}