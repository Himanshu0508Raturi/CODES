//WAP to calculate sum and average of 10 numbers.
#include<stdio.h>

void main(){
    int n,i=1,sum=0;
    float avg;
    while(i<=10)
    {
        printf("Enter a number.\n");
        scanf("%d",&n);
        sum=sum+n;
        i++;
    }
    avg=sum/10.00;
    printf("sum is %d.\n",sum);
    printf("Average is %f.\n",avg);
}