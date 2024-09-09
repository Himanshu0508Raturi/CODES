// /Write a C program to dynamically allocate memory for a 2D array of size MxN. Then, prompt the user to input values for each
// element of the array. Finally, print the sum of all the elements in the array.
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int m, n, i, j, *ptr, sum = 0;
    printf("Enter size of array.\n");
    scanf("%d %d", &m, &n);
    // ptr = (int *)calloc(m * n, sizeof(int));
    ptr = (int *)malloc((m * n)*sizeof(int));
    if (ptr == NULL)
    {
        printf("Insufficient space.\n");
    }
    else
    {
        printf("Enter elements.\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", ptr + i * n + j);
                sum += *(ptr + i * n + j);
            }
        }
        printf("Elements are.\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d ", *(ptr + i * n + j));
            }
            printf("\n");
        }
        printf("Sum is %d", sum);
    }
    free(ptr);
}