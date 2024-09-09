/*Draw a flowchart and write a C program that reads a sentence from the standard input device separated by single space between the
words. Design a UDF 'SubStr' that returns a sub-string through its argument to the calling program by taking the starting position and
ending position as arguments to the function. Display the sub-string in the calling program*/
#include <stdio.h>
char* substr(int, int, char[]);
void main()
{
    char str[40], *ptr;
    int st, en, i;
    printf("Enter a string.\n");
    gets(str);
    printf("Enter starting and ending position\n");
    scanf("%d%d", &st, &en);
    ptr = substr(st, en, str);
    for (i = st; i <= en; i++)
    {
        printf("%c", *(ptr + i));
    }
    // for(i=st;i<=en;i++)
    // {
    //      printf("%c",substr(str,i));
    //  }
}
char* substr(int x, int y, char a[])
{
    static char sub[30];
    int i;
    for (i = x; i <= y; i++)
    {
        sub[i] = a[i];
    }
    // puts(sub);
    return sub;
}