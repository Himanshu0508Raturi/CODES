// Write a C program that uses a function countVowelsConsonants(char *str, int *vowels, int *consonants) to count the number of vowels
//  and consonants in a string using pointers.
#include <stdio.h>
#include <string.h>
void countvowelsconsonants(char *, int *, int *);
void main()
{
    char str[30];
    int v = 0, c = 0;
    printf("Enter a string.\n");
    gets(str);
    countvowelsconsonants(str, &v, &c);
    printf("Vowels are %d and consonants are %d", v, c);
}

void countvowelsconsonants(char *ps, int *pv, int *pc)
{
    int i;
    for (i = 0; *(ps + i) != '\0'; i++)
    {
        if (*(ps + i) == 'a' || *(ps + i) == 'e' || *(ps + i) == 'i' || *(ps + i) == 'o' || *(ps + i) == 'u')
        {
            *(pv) = *(pv) + 1;
        }
        else
        {
            *(pc) = *(pc) + 1;
        }
    }
}