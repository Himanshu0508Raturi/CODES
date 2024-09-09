//sum of series 1/2 + 2/3 + 3/4 +------n-1/n.
#include <stdio.h>
#include <math.h>

int main() {
    float n, i;
    float sum = 0;
    printf("Enter n:\n");
    scanf("%f", &n);

    for (i = 1; i <= n-1; i++) {
        sum = sum + i/(i+1);
    }

    printf("%f", sum);
    return 0;
}
