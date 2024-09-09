//1^2 + 2^2 + 3^2 + ------n^2.
#include<stdio.h>
#include<math.h>
void main(){
    int n,i,sum=0;
    printf("Enter a number n\n");
    scanf("%d",&n);
    for(i=1; i<=n ; i++)
    {
        sum= sum+ pow(i,2);
    }
    printf("%d",sum);

}
