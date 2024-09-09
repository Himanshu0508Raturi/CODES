/*Open a file "File1.txt" present in the current default path. Read the last 200 bytes from the files and transfer it to another file
"Chunk.txt" also present in the current path. Display the content of the chunk.txt to the standard output device*/
#include <stdio.h>

void main()
{
    FILE *fp, *fa;
    int n, i;
    char ch;
    fp = fopen("fp.txt", "r");
    fa = fopen("Chunk.txt", "w+");
    fseek(fp, 0, 2);
    n = ftell(fp);

    while (n > 0 && (ch = getc(fp)))
    {
        putc(ch, fa);
        n--;
    }
    rewind(fa);
    while ((ch = getc(fa)) != EOF)
    {
        printf("%c", ch);
    }
}