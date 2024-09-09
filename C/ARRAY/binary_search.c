#include <stdio.h>

int main()
{
    int key;
    int n, a[10];
    printf("Enter n");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);
    int start, end, mid;
    start = 0;
    end = n - 1;
    int f = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (a[mid] < key)
        {
            start = mid + 1;
        }
        else if (a[mid] > key)
        {
            end = mid - 1;
        }
        else if (a[mid] == key)
        {
            f = 1;
            int ind=i;
            break;
        }
    }
    if (f == 0)
        printf("Element not found\n");
    else if (f == 1)
        printf("Element found\n");

    return 0;
}
