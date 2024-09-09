//Input a matrix of order m*n and print the sum of all the odd elements present in each row and column.
#include<stdio.h>

void main()
{
    int a[30][30],m,n,sum=0;
    printf("Enter row and column: \n");
    scanf("%d%d",&n,&m);
    printf("Enter elements: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]%2 !=0)
            {
                sum=sum+a[i][j];
            }
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
    printf("Sum of odd elements is: %d\n",sum);
}