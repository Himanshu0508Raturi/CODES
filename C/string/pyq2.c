/*implement a c program to read an entire string in lowercase or uppercase from the keyboard then replace the character at the middle
of the string by character X . If the string read is of even length , then ignore it.Display the modified string to the screen
*/
#include <stdio.h>

void main()
{
    char str[40];
    int i, l = 0;
    printf("Enter a string\n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        l++;
    }
    if (l % 2 == 0)
    {
        // do nothing
    }
    else
    {
        str[l / 2] = 'X';
    }
    puts(str);
}