/*Develop a C program that utilizes a function deleteElement(int *arr, int *size, int index) to delete an element at
 a given index from an array using pointers.*/
#include <stdio.h>
void deleteelement(int *, int *, int);
void main()
{
    int arr[20], n, i, ind;
    printf("Enter numbers of elements.\n");
    scanf("%d", &n);
    printf("Enter elements.\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index of element to delete(starts from 0).\n");
    scanf("%d", &ind);
    deleteelement(arr, &n, ind);
    printf("Array after modification is.\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
}

void deleteelement(int *pa, int *ps, int ind)
{
    int i;
    for (i = 0; i < *(ps); i++)
    {
        if (ind == i)
        {
            for (i = ind; i < *(ps); i++)
            {
                *(pa + i) = *(pa + i + 1);
            }
        }
    }
}
