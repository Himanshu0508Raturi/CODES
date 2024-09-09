//combination of a number using recursive function.
#include<stdio.h>
int fact(int);
void main()
{
    int n,r,res;
    printf("Enter N and R.\n");
    scanf("%d%d",&n,&r);
    res=fact(n)/(fact(r)*fact(n-r));
    printf("combination %d C %d = %d",n,r,res);
}

int fact(int x)
{
    if(x==0)
    {
        return 1;
    }else
    {
        return x* fact(x-1);
    }
}