//to calculate factorial of a number using do while loop.
#include<stdio.h>

void main(){
    int i,fact=1,n;
    printf("Enter a number n.\n");
    scanf("%d",&n);
    i=1;
    do{
        fact=fact*i;
        i++;
    }while(i<=n);
    printf("%d",fact);
}