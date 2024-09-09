//program to print initials of a string.
#include<stdio.h>
#include<string.h>

void main()
{
    char str[50];
    int i;
    printf("Enter a string.\n");
    gets(str);
    if(str[0] != ' ')
    {
        putchar(str[0]);
    }
    for(i=0 ; str[i] != '\0'; i++)
    {
          if(str[i] ==' ' && str[i+1] !=' ')
        {
            putchar(str[i+1]);
        }

    }



}
