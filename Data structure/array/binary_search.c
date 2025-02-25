// To perform binary search operation in an array.
#include <stdio.h>

void main()
{
    int a[10], n, i, num, ind,f=0;
    int st, end, mid;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter number to search: ");
    scanf("%d", &num);
    st = 0;
    end = n - 1;
    while (st <= end)
    {
        mid = (st + end) / 2;
        if (a[mid] > num)
        {
            end = mid - 1;
        }
        else if (a[mid] < num)
        {
            st = mid + 1;
        }
        else if (a[mid] == num)
        {
            ind=mid;
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("Element found at %d index.",ind);
    }else
    {
        printf("Element not found.");
    }
}
