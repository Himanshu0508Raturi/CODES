#include <stdio.h>
#include <string.h>
void main(int argc, char *argv[])
{
    int i;
    printf("Total arguments are:%d", argc);
    for (i = 1; i < argc; i++)
    {
        printf("\n%s", argv[i]);
    }
    getchar();
}