#include <stdio.h>
int find(int n, int m[n][n], int key)
{
    int i = 0;
    int j = n - 1;
    while (i < n && j >= 0)
    {
        printf("Checking position (  %d  ,  %d  ):  %d  \n  ", i, j, m[i][j]);
        if (m[i][j] == key)
        {
            return 1;
        }
        else if (m[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int m[n][n];
    printf("Enter the matrix elements:  \n  ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("  %d  ", &m[i][j]);
        }
    }
    int key;
    printf("Enter the key to search for: ");
    scanf(" %d ", &key);
    if (find(n, m, key))
    {
        printf("Present \n ");
    }
    else
    {
        printf("Not Present \n ");
    }
    return 0;
}