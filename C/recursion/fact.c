//factorial of a number using recursion.
#include<stdio.h>
int fact(int);
void main()
{
    int n;
    printf("Enter n.\n");
    scanf("%d",&n);
    printf("%d",fact(n));
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