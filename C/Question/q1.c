#include<stdio.h>
void main()
{
    int a[50][50],M,N,i,j,flag=0;
    printf("Enter the value of M and n: ");
    scanf("%d%d",&M,&N);
    if(M!=N)
    printf("Invalid Matrix");
    else
    {
    printf("Enter the value of matrix :\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i>j&&a[i][j]!=0)
            
            flag++;
            break;
        }
    }
    if(flag>0)
    printf("The matrix is not a upper triangular matrix");
    else
    printf("The matrix is a upper triangular matrix");
}
    
}