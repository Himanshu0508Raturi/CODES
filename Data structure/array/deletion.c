// To perform deletion operation in an array at a particular index.
#include <stdio.h>

void main()
{
    int a[10], n, i, ind;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter index of that element to be deleted: ");
    scanf("%d", &ind);
    printf("Array before modification\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = ind; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    printf("\nModified array is\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", a[i]);
    }
}
