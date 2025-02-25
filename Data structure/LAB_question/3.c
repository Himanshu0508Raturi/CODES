#include <stdio.h>

void main()
{
    int t,i;
    scanf("%d",&t);
    for(i = 0 ; i <t ; i++)
    {
    int arr[30], i, max, n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int freq[max + 1];
    for (i = 0; i < max + 1; i++)
    {
        freq[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (i = 0; i < max + 1; i++)
    {
        if (freq[i] % 2 != 0)
        {
            printf("%d", i);
            break;
        }
    }
    }
}