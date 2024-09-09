/*sum of series:
1^2 + 2^2 +3^2 + 4^2+........n^2.
*/
//sum of series using recursive function:
//1+2+3+4+5+......n.
//factorial of a number using recursion.
#include<stdio.h>
int sum(int);
void main()
{
    int n;
    printf("Enter n.\n");
    scanf("%d",&n);
    printf("%d",sum(n));
}

int sum(int x)
{
    if(x==0)
    {
        return 0;
    }else 
    {
        return x*x + sum(x-1);
    }


}