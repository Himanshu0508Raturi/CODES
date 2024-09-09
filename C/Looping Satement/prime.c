//to check prime number or not.
#include<stdio.h>

void main()
{
    int n,dc=0;
    printf("Enter a number.\n");
    scanf("%d",&n);
    for(int i=1; i<=n;i++)
    {
        if(n%i==0)
        {
            dc++;
        }
    }
    if(dc==2)
    {
        printf("Prime Number.\n");
    }else
    {
        printf("Not a prime number.\n");
    }
    
    
}