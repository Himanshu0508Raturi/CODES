//to input a square matrix of order N then calculate the sum of each row and print the highest sum.
#include<stdio.h>

void main()
{
    float a[30][30];
    int n,sum=0,max=0;
    printf("Enter the number of rows and columns: \n");
    scanf("%d",&n);
    printf("Enter Elements of matrix: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    printf("Elements are: \n");
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%f ",a[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    printf("%d",sum);
}

