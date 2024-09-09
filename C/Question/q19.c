/*19. Write a C program to create a file ThreeParas.txt and write any three paragraphs of text to it. Display the content of the file and
the count of frequency of consonants and vowels present in it to the console.*/
/*#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char str[2000], ch;
    int v = 0, c = 0;
    fp = fopen("ThreeParas.txt", "w");
    if (fp == NULL)
    {
        printf("File doesnt exist\n");
        exit(1);
    }
    printf("Enter a pragraph\n");
    gets(str);
    fputs(str, fp);
    fclose(fp);
    fp = fopen("Threeparas.txt", "r");
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
} */

#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
void main()
{
    FILE *fp;
    char ch;
    int v = 0, c = 0;
    fp = fopen("Threeparas.txt", "w+");
    if (fp == NULL)
    {
        printf("File doesn't exist\n");
        exit(1);
    }
    printf("Enter paragraphs\n");
    while ((ch = getchar()) != EOF)
    {
        putc(ch, fp);
    }
    rewind(fp);
    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
        tolower(ch);
        if (ch >= 'a' && ch <= 'z')
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