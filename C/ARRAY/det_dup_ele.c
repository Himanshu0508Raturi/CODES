// to delete duplicate element in an array.
#include <stdio.h>

void main()
{
    int a[20], i, j, n,s=0;
    printf("Enter limit.\n");
    scanf("%d", &n);
    printf("Enter %d elements.\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                a[j] = a[j + 1];
                s++;
            }
        }
    }
    for (i = 0; i < n-(s-2); i++)
    {
        printf("%d ", a[i]);
    }
}