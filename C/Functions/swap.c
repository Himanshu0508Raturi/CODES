//swapping to two numbers using function.
#include<stdio.h>

int swap(int,int);
void main(){
    int a,b,res;
    printf("Enter a,b.\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
}
int swap(int x,int y)
{
    int a,b,c;
    c=x;
    x=y;
    y=c;
    
}
