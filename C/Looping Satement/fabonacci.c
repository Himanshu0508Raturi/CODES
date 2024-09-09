#include<stdio.h>

void main(){
    int nt,n,a=0,b=1;
    printf("Enter the number of terms.\n");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(int i=3; i<=n;i++)
    {
        nt=a+b;
        printf(" %d",nt);
        a=b;
        b=nt;

    }

}