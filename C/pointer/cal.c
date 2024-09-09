// to input two integer numbers and then pass these numbers to the function and return sum and difference of these two numbers using 
//single function.
#include<stdio.h>
void cal(int,int,int*,int*);
void main()
{
    int a,b,sum=0,diff=0;
    printf("Enter two numbers.\n");
    scanf("%d %d",&a,&b);
    cal(a,b,&sum,&diff);
    printf("%d %d",sum,diff);

}

void cal(int x, int y, int *ps, int *pd)
{
    *ps=x+y;
    *pd=x-y;
}