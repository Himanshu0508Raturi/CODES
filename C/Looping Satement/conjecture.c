//Famous conjecture, all number converge to 1.
#include<stdio.h>

void main()
{
    int n;
    printf("Enter a number.\n");
    scanf("%d",&n);

    do
    {
        if(n%2==0)
        {
            n=n/2;
        }else
        {
            n=n*3+1;
        }
    printf("%d ",n); 

    }while(n!= 1);
}