/* To input N int numbers using dynamic memory allocation and then calculate their sum.*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *p, i, n, sum = 0;
    printf("Enter limit.\n");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));
    if (p == NULL)
    {
        printf("Unsufficient space.\n");
    }
    else
    {
        printf("Enter elements.\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", p + i);
            sum = sum + *(p + i);
        }
    }
    printf("Sum is %d.\n", sum);
    free(p);
}