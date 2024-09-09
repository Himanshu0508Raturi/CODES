//sum of series 1 - 1/3 + 1/5 - 1/7 +-------+1/n.
#include<stdio.h>

void main(){
    float n,sum=0.00;
    float sign=1.00;
    printf("Enter a odd number.\n");
    scanf("%f",&n);
    for(int i=1; i<=n; i=i+2)
    {
        sum=sum+1.00/i*sign;
        sign=-1.00*sign;
    }
    printf("Sum is %f\n",sum);



}