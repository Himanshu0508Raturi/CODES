//Write a C program to input any string from user and find the first occurrence of a given character in the string.
#include<stdio.h>

void main()
{
    char ch,str[30];
    int i,f=0,c=0;
    printf("Enter a string.\n");
    gets(str);
    printf("Input a character to search.\n");
    scanf("%c",&ch);
    for(i=0; str[i] != '\0'; i++)
    {
        if(str[i]== ch)
        {
            f=1;
            break;
        }else
        {
            c++;
        }
    }
    if(f==1)
    {
        printf("%c is found at %d index.\n",ch,c);
    }else
    {
        printf("%c not found.\n",ch);
    }
}