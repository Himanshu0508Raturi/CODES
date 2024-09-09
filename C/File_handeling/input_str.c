// to input a string using fputc().
#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp = NULL;
    char ch;
    fp = fopen("1.txt", "w");
    if (fp == NULL)
    {
        printf("File doesnt exist\n");
        exit(1);
    }
    printf("Enter a string\n");
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
    fclose(fp);
    fp = fopen("1.txt", "r");
    if (fp == NULL)
    {
        printf("File doesnt exist\n");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
}