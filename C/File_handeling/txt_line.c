/*WAP to print the text of a file on screen by printing the text line by line and displaying the line number before the text in each
line*/
#include <stdio.h>

void main()
{
    FILE *fp;
    char ch;
    int i = 1;
    fp = fopen("txt_line.txt", "r");
    printf("%d ", i);
    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
        if (ch == '\n')
        {
            printf("\n");
            i++;
            printf("%d ", i);
        }
    }
    fclose(fp);
}