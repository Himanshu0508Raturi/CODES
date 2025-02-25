// To perform traversing operation in an array.
#include <stdio.h>

void main()
{
    int a[10], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}