//sum of series 1-2+3-4+5-----n
#include<stdio.h>

void main(){
    int n,so=0,sum,se=0;
    printf("Enter a number n.\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            se=se+i;
        }else
        {
            so=so+i;
        }
        
    }sum=so-se;
    printf("%d",sum);


}