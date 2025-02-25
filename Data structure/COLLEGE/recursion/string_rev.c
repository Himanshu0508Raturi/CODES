#include <stdio.h>
#include <string.h>
void reverse_string(char str[], int l)
{
    if (l < 0)
    {
        return;
    }
    printf("%c", str[l]);
    reverse_string(str, l - 1);
}
void main()
{
    char str[50];
    gets(str);
    int l = strlen(str);
    reverse_string(str, l);
}