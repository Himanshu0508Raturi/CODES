/*Reverse Lines in a File
Write a C program that:
Reads a text file specified by the user.
Reverses the order of the lines in the file.
Writes the reversed lines to a new file named reversed.txt.*/
#include <stdio.h>

void main()
{
    FILE *fp, *fr;
    char ch;
    int l = 0, i;
    fp = fopen("Structure1.txt", "r");
    while ((ch = getc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            l++;
        }
    }
   printf("%d",l);
}