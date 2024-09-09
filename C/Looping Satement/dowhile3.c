//sum of digit of a number using do while loop.
#include<stdio.h>

void main(){
    int n,m,sum=0;
    printf("Enter n.\n");
    scanf("%d",&n);
    do
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }while(n>0);
    printf("%d",sum);

}