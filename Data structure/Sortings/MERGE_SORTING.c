#include <stdio.h>
void merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int temp[high - low + 1], k = 0;
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= high)
    {
        temp[k++] = arr[j++];
    }
    for (int i = 0, j = low; i < k; i++, j++)
    {
        arr[j] = temp[i];
    }
}
void merge_sort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = low + (high - low) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main()
{
    int n;
    printf("Enter Size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array Before Sorting: \n");
    print(arr, n);
    merge_sort(arr, 0, n - 1);
    printf("Array Before Sorting: \n");
    print(arr, n);
}