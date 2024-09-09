/* Develop a C program to compare two strings using a UDF and return 1 if the strings are 
equal and 0 otherwise without using the built-in function strcmp(). Display an appropriate 
message to the output screen.*/
#include<stdio.h>
#include<string.h>
int chk(char[],char[]);
void main()
{
        char str[30],str1[30];
        printf("Enter 1st string.\n");
        gets(str);
        printf("Enter 2nd string.\n");
        gets(str1);
        if( chk(str,str1) == 1)
        {
            printf("Strings are equal.\n");
        }else
        {
            printf("Strings are not equal.\n");
        }
}

int chk(char str[],char str1[])
{
    int i,s=0;
    if(strlen(str) != strlen(str1))
    {
        return 0;
    }else
    {
    for(i=0; str[i] !='\0'; i++)
    {
        if(str[i]== str1[i])
        {
            s++;
        }
    }
    }
    if(s==strlen(str))
    {
        return 1;
    }else
    {
        return 0;
    }
}