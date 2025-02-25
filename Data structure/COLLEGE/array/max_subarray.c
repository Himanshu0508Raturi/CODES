// used to find the maximum sum of a subarray.
#include <stdio.h>
#include <limits.h>
int max_sum(int arr[], int n) // T.C = O(n^3)
{
    int sum = 0, ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = 0;
            for (int k = i; k < j; k++)
            {
                sum += arr[k];
                if (sum > ans)
                {
                    ans = sum;
                }
            }
        }
    }
    return ans;
}
int max_sum_optimal(int arr[], int n) // T.C = O(n)
{
    // this is kadane's algo.
    int sum = 0, max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > max)
        {
            max = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return max;
}
void printing_max_subarray(int arr[], int n)
{
    int max = INT_MIN, sum = 0, ans_st = -1, ans_en = -1, start = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            start = i;
        }
        sum += arr[i];
        if (sum > max)
        {
            max = sum;
            ans_st = start;
            ans_en = i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    printf("Max sum subarray: ");
    int l = 0;
    for (int i = ans_st; i <= ans_en; i++)
    {
        printf("%d ", arr[i]);
        l++;
    }
    printf("\nLength is: %d\n",l);
}
void main()
{
    int n;
    printf("Enter Size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ans = max_sum_optimal(arr, n);
    printf("%d\n", ans);
    printing_max_subarray(arr, n);
}