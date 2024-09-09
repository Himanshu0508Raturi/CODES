/*WAP to read a file that contains characters. Encrypt the data in this file while writing it into another file. use ch=ch-2;
Ex: if you write 'red' then encrypted data becomes 'pcb'*/
#include <stdio.h>

void main()
{
    FILE *fp, *fo;
    char ch;
    fp = fopen("file.txt", "r");
    fo = fopen("final.txt", "w+");
    while ((ch = getc(fp)) != EOF)
    {
        ch = ch - 2;
        putc(ch, fo);
    }
    // fclose(fo);
    // fp = fopen("file.txt", "w");
    rewind(fo);
    // fo=fopen("final.txt","r");
    while ((ch = getc(fo)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
    fclose(fo);
}