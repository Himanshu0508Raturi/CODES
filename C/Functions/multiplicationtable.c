//multiplication table using function.

#include<stdio.h>
void table(int);
int input();
void main()
{
    int n;
    n=input();   
    table(n);
}

    int input()
    {
        int n;
        printf("Enter a number.\n");
        scanf("%d",&n);
        return n;
    }

    void table(int x)
    {
        
        for(int i=1;i<=10;i++)
        {
            printf("%d*%d=%d\n",x,i, x*i);
        }
    }

