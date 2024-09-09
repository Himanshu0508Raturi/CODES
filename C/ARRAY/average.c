// average of n integer number in an array.
#include <stdio.h>

void main()
{
    int a[10], i, n, sum = 0;
    float avg;
    printf("Enter limit.\n");
    scanf("%d", &n);
    printf("Enter %d elements.\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    avg = sum / n;
    printf("%f", avg);
}