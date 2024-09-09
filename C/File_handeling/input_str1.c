// to input string using fgets().
#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp = NULL;
    char str[500];
    fp = fopen("input_str1.txt", "w");
    if (fp == NULL)
    {
        printf("File does not exisi\n");
        exit(1);
    }
    printf("Enter a string\n");
    gets(str);
    fputs(str, fp); // write str string to file.
    fclose(fp);
    fp = fopen("input_str1.txt", "r");
    if (fp == NULL)
    {
        printf("File does not exisi\n");
        exit(1);
    }
    fgets(str, 500, fp); // get str from file.
    printf("%s",str);
    fclose(fp);
}