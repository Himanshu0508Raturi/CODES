/* Develop a C program to read two square binary matrices of order n x n from the user and 
perform the XOR on the elements of the matrices and print the resultant matrix to the output 
screen.*/
#include<stdio.h>

void main()
{
    int a[30][30],b[30][30],c[30][30];
    int i,j,n;
    printf("Enter order of binary matrix: \n");
    scanf("%d",&n);
    printf("Enter elements(0/1) for matrix A: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements(0/1) for matrix B: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j] ^ b[i][j];
           printf("%d ",c[i][j]);
        }
    }
    
}
