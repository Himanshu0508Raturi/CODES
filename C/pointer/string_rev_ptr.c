// Write a program in C to print a string in reverse using a pointer.
#include<stdio.h>
#include<string.h>
void rev(char *,int);
void main()
{
    char str[30];
    int i,l;
    printf("Enter a string.\n");
    gets(str);
    l=strlen(str);
    rev(str,l);
    printf("String in reverse order is.\n");
    puts(str);
}
void rev(char *p,int x)
{
    int i,j,temp;
    for(i=0,j=x-1;i<x/2;i++,j--)
    {
        temp=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=temp;
    }


}