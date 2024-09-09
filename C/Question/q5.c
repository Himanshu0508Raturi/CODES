/*Q5. Draw a flowchart to input a string and pass it to a function. Access the string using
pointers and print the vowels present in the string in reverse order implementing toggle case.
Sample input: abhdUgIfthdueGitsO
Sample output: oIEUiuA*/
#include <stdio.h>
#include <string.h>
void vowels(char *, int);
void main()
{
    char str[20];
    int l;
    printf("Enter a string.\n");
    gets(str);
    l = strlen(str);
    vowels(str,l);
}
void vowels(char *p, int x)
{
    int i;
    for (i = x - 1; i >= 0; i--)
    {
        if (*(p + i) == 'a' || *(p + i) == 'A' || *(p + i) == 'e' || *(p + i) == 'E' || *(p + i) == 'i' || *(p + i) == 'I' || *(p + i) == 'o' || *(p + i) == 'O' || *(p + i) == 'u' || *(p + i) == 'U')
        {
            if (*(p + i) >= 'a' && *(p + i) <= 'z')
            {
                *(p + i) = *(p + i) - 32;
            }else
            {
                *(p + i) = *(p + i) + 32;
            }
           // else if (*(p + i) >= 'A' && *(p + i) <= 'Z')
            //{
              //  *(p + i) = *(p + i) + 32;
            //}
            printf("%c ",*(p+i));
        }
    }
}