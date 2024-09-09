//count of times required to double a number to reach a million.

#include<stdio.h>

void main()
{
    unsigned long n;
    int count=0;
    printf("Enter a number.\n");
    scanf("%ld",&n);

    while(n< 1000000)
    {
        n=n*2;
        printf("%ld\n",n);
        count++;
    }
    printf("Times of double is %d",count);

}