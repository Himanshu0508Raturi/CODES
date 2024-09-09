/*WAP to store characters in a file then read the characters from the file and copy the character into the another file in toggle form */
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
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = tolower(ch);
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            ch = toupper(ch);
        }
        putc(ch, fo);
    } // AT THIS POINT BOTH fo AND fp ARE AT (EOF) POSITION.
    rewind(fp);
    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
    rewind(fo);
    while ((ch = getc(fo)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fo);
}