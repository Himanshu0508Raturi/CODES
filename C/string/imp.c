/*WAP that reads a string from the standard input devices separated by spaces. Call a UDF that returns the reversed string to the
calling program. In calling program check if it's a palindrone or not.*/
#include <stdio.h>
#include <string.h>
char* rev(char [], int);
void main()
{
    int i, l = 0;
    char str1[50], str[50],*p;
    printf("Enter a string\n");
    gets(str);
    strcpy(str1, str);
    p=rev(str1, strlen(str1));
    for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == *(p+i))
            {
              l++;
            }
        }
    if (l == strlen(str))
    {
        printf("Strings is pallindrone.\n");
    }
    else
    {
        printf("Strings is not pallindrone.\n");
    }
}
char* rev(char a[], int x)
{
    int i, j;
    char temp;

    for (i = 0, j = x - 1; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    return a;
}
