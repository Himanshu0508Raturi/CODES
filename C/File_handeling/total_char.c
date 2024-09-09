// to count the total number of character in a file and total number of words.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp = NULL;
    char str[250], ch;
    int c = 0, w = 0;
    fp = fopen("total_char.txt", "w");
    if (fp == NULL)
    {
        printf("File doesnt exist\n");
        exit(1);
    }
    printf("Enter a string\n");
    gets(str);
    fputs(str, fp);
    fclose(fp);
    fp = fopen("total_char.txt", "r");
    while ((ch = getc(fp)) != EOF)
    {
        if (ch != ' ')
        {
            c++;
           
        }
        if(ch==' ')
        {
            w++;
        }
       
    }
    printf("Count of character are: %d\n", c);
    printf("Count of words are: %d", w+1);

        fclose(fp);
}
