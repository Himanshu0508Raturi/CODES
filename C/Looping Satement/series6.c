//x^1 + x^2 + x^3 + ------x^n.
#include<stdio.h>
#include<math.h>
void main(){
    int n,x,i,sum=0;
    printf("Enter x and n.\n");
    scanf("%d%d",&x,&n);
    for(i=1; i<=n ; i++)
    {
        sum= sum+ pow(x,i);
    }
    printf("%d",sum);

}
