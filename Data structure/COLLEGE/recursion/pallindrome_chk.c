#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool is_pallindrome(char str[], int l, int st, int end)
{
    if (st == l / 2)
    {
        return true;
    }
    else if (str[st] == str[end])
    {
        st++;
        end--;
    }
    else
    {
        return false;
    }
    is_pallindrome(str, l, st, end);
}
void main()
{
    char str[50];
    gets(str);
    int l = strlen(str);
    int st = 0, end = l - 1;
    if (is_pallindrome(str, l, st, end))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}