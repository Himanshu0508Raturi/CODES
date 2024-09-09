//to read the number of lines in a file.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp = NULL;
    char str[1000], ch;
    int l = 0;
    //fp = fopen("lines.txt", "w");
    //if (fp == NULL)
    //{
   //     printf("File doesnt exist\n");
   //     exit(1);
   // }
   // printf("Enter a string\n");
    //gets(str);
    //fputs(str, fp);
   // fclose(fp);
    fp = fopen("lines.txt", "r");
    while ((ch = getc(fp)) != EOF)
    {
       if(ch=='\n')
       {
        l++;
       }
    }
    printf("Count of lines are: %d", l);
    fclose(fp);
}
