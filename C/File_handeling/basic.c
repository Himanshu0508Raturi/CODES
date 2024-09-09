// basic program to understand file handeling.
#include <stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char ch = 'a', ch1;
    fp = fopen("abc.txt", "w");
    if (fp == NULL)
    {
        printf("File doesnt exist\n");
        exit(1);
    }
    putc(ch, fp);
    fclose(fp);
    fp = fopen("abc.txt", "r");
    if (fp == NULL)
    {
        printf("File doesnt exist\n");
        exit(1);
    }
    ch1 = getc(fp);
    printf("%c", ch1);
    fclose(fp);
    
}