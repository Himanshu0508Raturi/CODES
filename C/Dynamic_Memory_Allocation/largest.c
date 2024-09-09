// Find the largest element using Dynamic Memory Allocation
#include <stdio.h>
#include <stdlib.h>

void main()
{

    int n, *p, i, max;
    printf("Enter numbers of elements.\n");
    scanf("%d", &n);
    // p = (int *)calloc(n, sizeof(int));
    p = (int *)malloc(n * sizeof(int)); // Not work by malloc because it store in a single block unlike calloc.
    if (p == NULL)
    {
        printf("Insufficient space.\n");
    }
    else
    {
        printf("Enter elements.\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", (p + i));
        }
        max = *(p);
        for (i = 1; i <= n; i++)
        {
            if (*(p + i) > max)
            {
                max = *(p + i);
            }
        }
    }
    printf("Max. number is %d", max);
    free(p);
}