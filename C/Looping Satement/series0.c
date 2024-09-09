//sum of series 2+4+6+8+-----upto 1st n even no.
#include<stdio.h>

void main(){
    int n,sum=0;
    printf("Enter a number.\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        sum=sum+i*2;
    }
    printf("%d",sum);
}