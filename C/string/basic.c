//to input a string and print it.Using traditional method.
#include<stdio.h>

void main()
{
    char str[100];
    int i=0;
    printf("Input a string and press enter to exit.\n");
    do{
        scanf("%c",&str[i]);
        i++;
    }while(str[i-1]!='\n');
    str[i-1]='\0';
    for(i=0;str[i] !='\0';i++)
    {
        printf("%c",str[i]);
    }
}