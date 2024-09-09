//Working/accessining secondary diagonal element of a square matrix of size n.
#include<stdio.h>

void main()
{
    float a[30][30];
    int i,j,n;
    printf("Enter order of matrix: \n");
    scanf("%d",&n);
    printf("Enter elements: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    printf("Elements are: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%f ",a[i][j]);
        }
        printf("\n");
    }
    printf("Elements of secondary diagonal are: \n");
    for(i=0,j=n-1;i<n;i++,j--)
    {
        printf("%f ",a[i][j]);
    }
}