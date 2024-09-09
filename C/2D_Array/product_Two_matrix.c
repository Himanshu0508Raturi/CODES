//product of two matrix.
#include<stdio.h>

void main()
{
    int a[30][30],b[30][30],c[30][30]={0},i,j,k,n1,m1,n2,m2;
    printf("Enter Row and column for 1st matrix: ");
    scanf("%d%d",&n1,&m1);
    printf("Enter Row and column for 2nd matrix: ");
    scanf("%d%d",&n2,&m2);
    if(m1!= n2)
    {
        printf("Multiplication not possible.\n");
    }else
    {
        //inputing 1st matrix.
        printf("Enter 1st matrix: \n");
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        //inputing 2nd matrix.
        printf("Enter 2nd matrix: \n");
        for(i=0;i<n2;i++)
        {
            for(j=0;j<m2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        //printing 1st matrix.
        printf("Matrix a is: \n");
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m1;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        //printing 2nd matrix.
        printf("Matrix b is: \n");
        for(i=0;i<n2;i++)
        {
            for(j=0;j<m2;j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }
        //multiplication logic.
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m2;j++)
            {
                for(k=0;k<m1;k++)// k will run either till m1 or n2 as both are equal in this case.
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        // printing C matrix.
        printf("matrix after multiplication is: \n");
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m2;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }

    }


}