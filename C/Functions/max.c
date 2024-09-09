//function to check maximum of two number.
#include<stdio.h>

int chk(int,int);
void main()
{
    int n1,n2;
    printf("Enter two number.\n");
    scanf("%d%d",&n1,&n2);
    printf("%d",chk(n1,n2));
}

int chk(int x,int y)
{
    int max;
    max=x;
    if(y>x)
    {
        max=y;
    }
    return max;
}