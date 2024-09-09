//to input a string and toggle it.
//toggle = uppercase to lowercase and wise versa.
#include<stdio.h>

void main()
{
    int i;
    char str[50];
    printf("Enter a string and press enter to exit.\n");
    gets(str);
    for(i=0; str[i] != '\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] += 32;
        }else if(str[i]>='a' && str[i]<='z')
        {
            str[i] -= 32;
        }
    }
    puts(str);
}