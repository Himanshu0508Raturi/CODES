//1x + 2x + 3x + ------nx.
#include<stdio.h>
#include<math.h>
void main(){
    int n,x,i,sum=0;
    printf("Enter x and n.\n");
    scanf("%d%d",&x,&n);
    for(i=1; i<=n ; i++)
    {
        sum= sum+(x*i);
    }
    printf("%d",sum);

}

