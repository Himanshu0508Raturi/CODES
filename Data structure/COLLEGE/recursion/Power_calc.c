#include <stdio.h>
int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    return x * power(x, n - 1);
}
void main()
{
    int b, ex;
    scanf("%d%d", &b, &ex);
    printf("%d", power(b, ex));
}