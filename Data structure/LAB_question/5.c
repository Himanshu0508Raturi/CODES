#include <stdio.h>
int find_row(int mat[][3], int m)
{
    int i, j;
    for (i = 0, j = 0; j < m; j++)
    {
        if (mat[j][i] == 1)
        {
            return (j + 1);
            break;
        }
    }
}
void main()
{
    int t,i;
    scanf("%d",&t);
    for(i = 0 ; i <t ; i++)
    {
    int m, n;
    int i, j, r;
    scanf("%d%d", &m, &n);
    int mat[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    r = find_row(mat, m);
    printf("row = %d", r);
    }
}