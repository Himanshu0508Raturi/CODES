// Find the second largest element in the given array
#include <stdio.h>  
#include <limits.h> 
int main()          
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = INT_MIN, smax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] > smax && arr[i] < max)
        {
            smax = arr[i];
        }
    }

    printf("Second largest element = %d", smax);
}