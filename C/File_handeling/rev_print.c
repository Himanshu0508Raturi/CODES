/*Write a program to input character in a file then read the character from the file in reverse order and print it*/
#include <stdio.h>

void main()
{
    FILE *fp;
    char ch;
    int n, i;
    fp = fopen("input.txt", "w+");
    while ((ch = getchar()) != EOF)
    {
        putc(ch, fp);
    }
    n = ftell(fp);
    while (n > 0)
    {
        putchar(getc(fp));
        fseek(fp, -2, 1);
        n--;
    }
    fclose(fp);
}