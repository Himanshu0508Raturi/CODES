//Program to print factorial of a number using function.
#include<stdio.h>
int fact(int);
void main(){
    int n,res;
    printf("Enter n.\n");
    scanf("%d",&n);
    res=fact(n);
    printf("%d",res);
}
int fact(int x)
{
    int f=1;
    for(int i=2; i<=x;i++)
    {
        f=f*i;
    }
    return f;
}
