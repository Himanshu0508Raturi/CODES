#include<stdio.h>

void main()
{
    int n,c=1;
    printf("Enter rows.");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {printf(" %d",c);
        c++;
        if(c==10)
        {
            c=1;
        }
        }
        printf("\n");
    }



}