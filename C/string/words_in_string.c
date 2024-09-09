// program to find the words in string.
#include<stdio.h>
#include<string.h>

void main()
{
    char str[50];
    int i,s=0;
    printf("Enter a string.\n");
    gets(str);
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] ==' ' && str[i+1] !=' ')
        {
            s++;
        }

    }
    printf("Number of words are %d.\n",s+1);



}