//to extract last N character of a string.
#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    int i,n,l;
    printf("Enter a string.\n");
    gets(str);
    printf("Enter N.\n");
    scanf("%d",&n);
    l=strlen(str);
    for(i=l-n; i <= l ;i++)
    {
        putchar(str[i]);
    }
    str[i]='\0';
}