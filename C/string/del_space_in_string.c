//to delete space in a string.
//program to print initials of a string.
#include<stdio.h>
#include<string.h>

void main()
{
    char str[50];
    int i,j;
    printf("Enter a string.\n");
    gets(str);
    if(str[0] == ' ')
    {
        str[0] = str[0+1];
    }
    for(i=0 ; str[i] != '\0'; i++)
    {
          if(str[i] ==' ' && str[i+1] !=' ')
        {
            for(j=i;str[j]!='\0'   ;j++)
            str[j]=str[j+1];
        }

    }
    puts(str);

}
