// To perform linear search operation in an array.
#include <stdio.h>

void main()
{
    int a[10], n, i, num, ind, f = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            ind = i;
            f == 1;
            break;
        }
    }
    if (f == 1)
    {
        printf("Element found at %d index.", ind);
    }
    else
    {
        printf("Element not found.");
    }
}