//printing fabonacci series using do while loop.
#include<stdio.h>

void main(){
    int n,i,a=0,b=1,nt;
    printf("Enter number of terms.\n");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    i=1;
    do
    {
        nt=a+b;
        printf("%d ",nt);
        a=b;
        b=nt;
        i++;
    }while(i<=n);
    

}