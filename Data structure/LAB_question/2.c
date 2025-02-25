#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void main()
{
    int t,i;
    scanf("%d",&t);
    for(i = 0 ; i <t ; i++)
    {
    int arr[15], i, a, n, b, diff;
    int pos_a = -1, pos_b = -1, min_dist = INT_MAX;
    // printf("Enter n: ");
    scanf("%d", &n);
    // printf("Enter elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //printf("Enter a: ");
    scanf("%d %d", &a , &b);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            pos_a = i;
            if (pos_b != -1)
            {
                diff = abs(pos_a - pos_b);
                if (diff < min_dist)
                {
                    min_dist = diff;
                }
            }
        }
        if (arr[i] == b)
        {
            pos_b = i;
            if (pos_a != -1)
            {
                diff = abs(pos_a - pos_b);
                if (diff < min_dist)
                {
                    min_dist = diff;
                }
            }

        }
    }
    if(pos_a == -1 || pos_b == -1)
    {
        min_dist=-1;
    }
    printf("%d", min_dist);
    }
}