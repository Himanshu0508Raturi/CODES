// Develop a program in C to replace a specific line with another text in a file.
#include <stdio.h>

void main()
{
    FILE *fp, *ft;
    char ch, str[50];
    int i, l = 0, lc = 0;
    fp = fopen("fp.txt", "r+");
    ft = fopen("temp.txt", "w+");
    printf("Enter the line number: ");
    scanf("%d", &l);
    printf("Enter the text.\n");
    fflush(stdin);
    gets(str);
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            lc++;
        }
        for (i = 1; ch = getc(fp) != EOF;)
        {
            if (i == ('\n'))
            {
                i++;
            }
            if (lc != l)
            {
                fputc(ch, ft);
            }
            else
            {
                fputs(str, ft); // Write the new line directly using fputs
            }
        }
    }
}