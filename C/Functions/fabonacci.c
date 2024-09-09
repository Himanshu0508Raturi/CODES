//function to print fabonacci series.
#include<stdio.h>

int fab(int);

void main(){
    int n;
    printf("Enter nth number.\n");
    scanf("%d",&n);
    fab(n);
}

int fab(int x)
{
    int a=0,b=1;
    int nt;
    printf("%d %d",a,b);
    for(int i=3; i<=x;i++)
    {
        nt=a+b;
        printf(" %d ",nt);
        a=b;
        b=nt;
    }  

}