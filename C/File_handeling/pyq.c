#include<stdio.h>

void main()
{
    FILE *fp;
    char ch;
    int i;
    fp=fopen("Data.txt","r");
    fseek(fp,50,0);
    for(i=0;i<100;i++)
    {
        ch=getc(fp);
        if(ch>='a'&&ch<='z')
        {
            ch=ch-32;
        }
        printf("%c",ch);

    }

}