//to input numbers in a 2d array then calculate sum of a row whose index will be input by user.
#include<stdio.h>
void main()
{
    int a[30][30],n,m,sum=0,ind;
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
    printf("Enter index: \n");
    scanf("%d",&ind);
    for(int j=0;j<m;j++)
    {
        sum=sum+a[ind][j];
    }
    
    printf("%d",sum);
}