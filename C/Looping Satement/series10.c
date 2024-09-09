//sum of series 1/1^1 + 1/2^2 + 1/3^3 +------1/n^n.
#include <stdio.h>
#include <math.h>

int main() {
    float n, i;
    float sum = 0;
    printf("Enter n:\n");
    scanf("%f", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + 1/pow(i,i);
    }

    printf("%f", sum);
    return 0;
}

