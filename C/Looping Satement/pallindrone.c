#include<stdio.h>

void main(){
    int n,rev=0,temp;
    printf("Enter a number.\n");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        rev=temp%10+rev*10;
        temp=temp/10;
    }
    if(rev==n)
    {
        printf("It is a pallindrone number.\n");
    }else
    {
        printf("Not a pallindrone number.\n");
    }
}