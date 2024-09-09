/*Design a UDF using pointer and that returns 1 if the string is a palindrome otherwise zero.
Accept a string from user in the calling program.Display an appropriate message in the
calling program. Implement a C program for the same. Ignore the case.*/

#include <stdio.h>
#include <string.h>
int pall(char[]);
void main()
{
    char str[30];
    int i, r;
    printf("Enter a string.\n");
    gets(str);
    r = pall(str);
    if (r == 1)
    {
        printf("string is pallindrome.\n");
    }
    else
    {
        printf("string is not pallindrone.\n");
    }
}

int pall(char str[])
{
    int i, f = 0;
    char b[30], *p;
    p = str;
    strcpy(b, str);
    strrev(b);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (*(p + i) == b[i])
        {
            f++;
        }
    }
    if (f == strlen(str))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
