// WAP to count the total number of vowels and consonents present in a file.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char str[250], ch;
    int v = 0, c = 0;
    fp = fopen("vc.txt", "w");
    if (fp == NULL)
    {
        printf("File doesnt exist\n");
        exit(1);
    }
    printf("Enter a string\n");
    gets(str);
    fputs(str, fp);
    fclose(fp);
    fp = fopen("vc.txt", "r");
    if (fp == NULL)
    {
        printf("File doesnt exist\n");
        exit(1);
    }
    while ((ch = getc(fp)) != EOF)
    {
        if (ch != ' ' && ch>='a' && ch<='z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
    }
    printf("Vowels: %d \nConsonents: %d", v, c);
    fclose(fp);
}