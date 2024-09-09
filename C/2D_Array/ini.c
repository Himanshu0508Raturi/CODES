//Initialization of 2D array at compile time.
/*#include<stdio.h>

void main()
{
int a[2][3]={{2,7},{6,9,1}};
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
    
}*/

//Initialization of 2D array at run time.
#include<stdio.h>

void main()
{
    int a[30][30],n,m;
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
        }
        printf("\n");
    }


}