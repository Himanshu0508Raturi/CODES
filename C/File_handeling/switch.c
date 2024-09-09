// WAP to input characters in a file then read the characters from the file and count how many of them are vowels using switch case.
#include <stdio.h>
#include <ctype.h>
void main()
{
    FILE *fp;
    char ch;
    int v = 0;
    fp = fopen("switch.txt", "w");
    printf("Enter data and press (enter) ctrl+z (enter ) to exit\n");
    while ((ch = getchar()) != EOF)
    {
        putc(ch, fp);
    }
    fclose(fp);
    fp = fopen("switch.txt", "r");
    while ((ch = getc(fp)) != EOF)
    {
        ch = tolower(ch);
        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            v++;
        }
    }
    printf("%d", v);
    fclose(fp);
}