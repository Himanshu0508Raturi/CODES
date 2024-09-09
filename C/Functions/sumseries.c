//sum of series 1+(1+2)+(1+2+3)+(1+2+3+4+-----n).
#include<stdio.h>
int series (int);
void main()
{
    int n,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+series(i);
    }
    printf("sum is %d",sum);
}
    int series(int x)
    {
        int sum=0;
        for(int i=1;i<=x;i++)
        {
            sum=sum+i;

        }
        return sum;
    }