// rotate matrix in clockwise direction
#include <stdio.h>
void main()
{
    int t,i;
    scanf("%d",&t);
    for(i = 0 ; i <t ; i++)
    {
    int m, n;
    int i, j;
    int row = 0, col = 0, prev, curr;
    //printf("Enter n: \n");
    scanf("%d", &n);
    m = n;
    int tm=m,tn=n;
    int mat[m][n];
    //printf("Enter elements: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    while (row < n && col < n)
    {
        prev = mat[row + 1][col];

        /* Move elements of first row from the remaining
         * rows */
        for (int i = col; i < n; i++)
        {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;
        /* Move elements of last column from the remaining
         * columns */
        for (int i = row; i < m; i++)
        {
            curr = mat[i][n - 1];
            mat[i][n - 1] = prev;
            prev = curr;
        }
        n--;
        /* Move elements of last row from the remaining rows
         */
        for (int i = n - 1; i >= col; i--)
        {
            curr = mat[m - 1][i];
            mat[m - 1][i] = prev;
            prev = curr;
        }
        m--;

        /* Move elements of first column from the remaining
         * rows */
        for (int i = m - 1; i >= row; i--)
        {
            curr = mat[i][col];
            mat[i][col] = prev;
            prev = curr;
        }
        col++;
    }

//printf("After rotation matrix is: \n");
printf("\n");
for (i = 0; i < tm; i++)
{
    for (j = 0; j < tn; j++)
    {
        printf("%d ", mat[i][j]);
    }
    printf("\n");
}
    }
}