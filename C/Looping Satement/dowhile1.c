//calculate sum of 1st n natural number using do while loop.
#include<stdio.h>

void main(){
     
    int n,sum=0,i;
    printf("Enter n.\n");
    scanf("%d",&n);
    i=1;
    do{
        sum=sum+i;
        i++;
    }while(i<=n);
    printf("%d",sum);
}