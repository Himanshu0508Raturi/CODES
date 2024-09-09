//table of any number.5*1=5
//                    5*2=10
#include<stdio.h>

void main(){
    int n;
    printf("Enter a number n.\n");
    scanf("%d",&n);
    for(int i=1; i<=10; i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
}