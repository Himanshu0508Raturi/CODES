#include <stdio.h>
#include <string.h>
char *rev(char[], int);
void main()
{
    char str[30],sn[30], *p;
    int i, f = 0;
    printf("Enter a string: ");
    gets(str);
    strcpy(sn,str);
    p = rev(str, strlen(str));
    for (i = 0; sn[i] != '\0'; i++)
    {
        if (*(p + i) != sn[i])
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        printf("Not palindrome.");
    }
    else
    {
        printf("Palindrome.");
    }
}
char *rev(char b[], int x)
{
    int i, l, temp;
    for (i = 0, l = x - 1; i < x / 2; i++, l--)
    {
        temp = b[i];
        b[i] = b[l];
        b[l] = temp;
    }
    return b;
}