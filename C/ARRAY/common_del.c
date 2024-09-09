// to initialize two array and print the elements which are common to both the array.
#include <stdio.h>

void main()
{
    int a[30], b[30], n;
    printf("Enter limit: ");
    scanf("%d", &n);
    printf("Enter elements of array a: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter elements of array b: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }
}