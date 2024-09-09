/*Write a C program to accept the string from the user and then reverse string without using 
the second string*/
#include<stdio.h>
#include<string.h>
void main()
{
    char str[50],str1[50];
    int i,l,r,temp;
    printf("Enter a string.\n");
    gets(str);
    printf("String before reverse.\n");
    puts(str);
    l= strlen(str);
    for(i=0,r=l-1;i<l/2;i++,r--)
    {
        temp=str[i];
        str[i]=str[r];
        str[r]=temp;
    }
    printf("string after reverse.\n");
    puts(str);

} 