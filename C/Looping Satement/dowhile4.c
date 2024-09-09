//to check whether a number is pallindrone or not using do while.
#include<stdio.h>

void main(){
    int n,temp,reverse=0;
    printf("Enter n.\n");
    scanf("%d",&n);
    temp=n;
    do
    {
        reverse=reverse*10+temp%10;
        temp=temp/10;
        
    }while(temp>0);

    if(reverse==n)
    {
        printf("It is a pallindrone.\n");
    }else
    {
        printf("Not a pallindrone.\n");
    }
    

}