/*WAP to merge two files into a third file.*/
#include<stdio.h>
void main()
{
    FILE *f1,*f2,*f3;
    char ch;
    f1=fopen("m1.txt","w+");
    while((ch=getchar())!= EOF)
    {
        putc(ch,f1);
    }
    rewind(f1);
    f2=fopen("m2.txt","w+");
    while((ch=getchar())!= EOF)
    {
        putc(ch,f2);
    }
    rewind(f2);
    f3=fopen("m3.txt","w");
    while((ch=getc(f1)) != EOF)
    {
        putc(ch,f3);
    }
    fclose(f1);
    fclose(f3);
    f3=fopen("m3.txt","a+");
    while((ch=getc(f2))!=EOF)
    {
        putc(ch,f3);
    }
    fclose(f2);
    fclose(f3);

}