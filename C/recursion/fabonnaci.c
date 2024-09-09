//fabonacci series using recursion.
#include<stdio.h>
int fs(int);
void main()
{
    int n,i;
    printf("Enter n term.\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fs(i));//passing position to parent function.
    }
}
int fs(int x)
{
    if(x==0)
    {
        return 0;
    }else if(x==1)
    {
        return 1;
    }else
    {
        return fs(x-1) + fs(x-2);
    }
}
