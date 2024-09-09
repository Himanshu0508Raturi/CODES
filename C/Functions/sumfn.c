//Calculate sum of two numbers using functions.
#include<stdio.h>

int sum(int ,int);//declare
void main(){
    int a,r,b;
    printf("Enter two numbers.\n");
    scanf("%d %d",&a,&b);
    r=sum(a,b);//call
    printf("%d",r);
}
    int sum(int x,int y)//definition.
    {
        int s;
        s=x+y;
        return s;
    }