/*Q10. Input a string using dynamic memory allocation and print the count of all the words
starting with a letter given by the user*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char *p,l;
    int i,c=0;
    p = (char *)calloc(20 , sizeof(char));
    if (p == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        printf("Enter a string.\n");
        gets(p);
        printf("Enter a letter.\n");
        scanf("%c",&l);
        if(*(p)==l)
        {
            c++;
        }
        for (i = 1; *(p + i) !='\0'; i++)
        {
            if(*(p+i)==' ' && *(p+i+1) == l)
            {
                c++;
            }
        }
    }
    printf("There are %d words starting with %c letter",c,l);
    free(p);
}