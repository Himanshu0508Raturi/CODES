#include <stdio.h>
void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > temp)
        {
            arr[i]=arr[j];
            j--;
        }
        arr[j+1]=temp;
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
    insertion_sort(arr, n);
    printf("After sorting array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}