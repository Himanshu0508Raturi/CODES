// /Develop a program in C to merge two files and write the merged content into another file.
#include<stdio.h>

void main()
{
    FILE *fp,*f1,*f2;
    char ch;
    f1=fopen("Data.txt","r");
    f2=fopen("copy_data1.txt","r");
    fp=fopen("fp.txt","w");
    while((ch=getc(f1))!=EOF)
    {
        putc(ch,fp);
    }
    fclose(f1);
    while((ch=getc(f2))!=EOF)
    {
        putc(ch,fp);
    }
    fclose(f2);
    fclose(fp);




}