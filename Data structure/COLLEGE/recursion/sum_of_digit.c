#include<stdio.h>
int sum_of_digit(int n)
{
    if(n == 1 || n ==0)
    {
        return n;
    }
    return (n%10) + sum_of_digit(n/10);
}
void main()
{
    int n;
    scanf("%d" ,&n);
    printf("%d" , sum_of_digit(n));
}