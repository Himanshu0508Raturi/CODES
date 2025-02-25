// To perform insertion operation in an array at a particular index.
#include <stdio.h>

void main()
{
    int a[10], n, i, ind, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter element and index to be inserted: ");
    scanf("%d%d", &num, &ind);
    printf("Array before modification\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = n; i > ind; i--)
    {
        a[i] = a[i - 1];
    }
    a[ind] = num;
    printf("\nModified array is\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
}
