//1/1^2 + 1/2^2 + 1/3^2 + ------1/n^2.
#include<stdio.h>
#include<math.h>
void main(){
    float n,i,sum=0;
    printf("Enter n.\n");
    scanf("%f",&n);
    for(i=1; i<=n ; i++)
    {
        sum= sum+1/(i*i);
    }
    printf("%f",sum);

}

