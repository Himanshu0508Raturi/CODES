//program to find the length of string.
#include<stdio.h>

void main()
{
    char str[50];
    int i,l=0;
    printf("Enter a string.\n");
    gets(str);
    puts(str);
    for(i=0;str[i]!='\0';i++)
    {
        l++;
    }
    printf("%d\n",l);
}
//we also have a predefine library function for this:- strlen(string_name).
#include<stdio.h>

void main()
{
    char str[50];
    int l;
    printf("Enter a string.\n");
    gets(str);
    puts(str);
    printf("%d",l=strlen(str));

}

/*
using pointers
#include<stdio.h>

void main()
{
    char str[50];
    int i,l=0;
    char *p=0;
    printf("Enter a string.\n");
    gets(str);
    puts(str);
    for(p=str; *p !='\0';p++)
    {
        l++;
        
    }
    printf("%d\n",l);
}*/