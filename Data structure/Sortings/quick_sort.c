#include <stdio.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h;
    while (i < j)
    {
        do
        {
            i++;
        } while (arr[i] <= pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[l], &arr[j]);
    return j;
}
void quick_sort(int arr[], int l, int h)
{
    if (l < h)
    {
        int j = partition(arr, l, h);
        quick_sort(arr, l, j);
        quick_sort(arr, j + 1, h);
    }
}
void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    quick_sort(arr, 0, n);
    printf("After sorting array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}