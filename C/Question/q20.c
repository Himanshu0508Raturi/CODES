/*20. Develop a C program to create a file and copy its contents to another file such that there is no space between any of the words in
the copied file. Display the content of the newly copied file to the output screen.*/
#include <stdio.h>
#include <ctype.h>
void main()
{
    FILE *fp, *fo;
    char ch;
    fp = fopen("copy_data.txt", "w+");
    printf("Enter data and press (enter) ctrl+z (enter ) to exit\n");
    while ((ch = getchar()) != EOF)
    {
        putc(ch, fp);
    }
    rewind(fp);
    fo = fopen("copy_data1.txt", "w+");
    while ((ch = getc(fp)) != EOF)
    {
        if (ch == ' ')
        {
            ch = ch - 32;
        }
        else
        {
            putc(ch, fo);
        }
    }
    fclose(fp);
    rewind(fo);
    while ((ch = getc(fo)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fo);
}