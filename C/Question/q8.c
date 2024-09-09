/*Develop a C program to find the number of occurrences of each alphabet in a string 
accepted from the user and display the same to the output screen. Assume that the string 
contains only alphabets. */
#include<stdio.h>

void main()
{
    char str[30],i,temp;
    int j,count=0;
    printf("Enter a string.\n");
    gets(str);
    for(i='a' ; i<='z' ;i++)
    {
        temp=i;
        count=0;
        for(j=0 ; str[j] != '\0'; j++)
        {
            if(str[j] != ' ' && str[j]== temp)
            {
                count++;
            }
        }
        if(count >0)
        {
            printf("%c-%d\n",temp,count);
        }
    }
    
}