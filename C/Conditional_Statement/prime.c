//program to check a given number is prime or not.
#include<stdio.h>

void main(){
    int n;
    printf("Input a number.\n");
    scanf("%d",&n);
    if(n>1){
        if(n%n!=0 && n%1==0)
        {
            printf("%d is a prime number.\n",n);
        }else
        {
            printf("%d is not a prime number.\n",n);
        }
    }else
    {
        printf("wrong input.\n");
    }





}