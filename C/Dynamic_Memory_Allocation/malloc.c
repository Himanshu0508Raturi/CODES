/* To input N int numbers using dynamic memory allocation and then calculate their sum.*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p, n, i;
    printf("Enter limit.\n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int)); // p=(int *)calloc(n,sizeof(int));
    printf("Enter Elements.\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    printf("Elements are.\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    free(p);
}