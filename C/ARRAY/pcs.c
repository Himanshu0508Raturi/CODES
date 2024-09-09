#include <stdio.h>

int main() {
    int n,arr[20];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter the value of K: ");
    scanf("%d", &k);

    int ngreat = 0, nless = 0, nequal = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > k) {
            ngreat++;
        } else if (arr[i] < k) {
            n++;
        } else {
            nequal++;
        }
    }

    
    printf("Count of numbers greater than %d: %d\n", k, ngreat);
    printf("Count of numbers less than %d: %d\n", k, nless);
    printf("Count of numbers equal to %d: %d\n", k, nequal);

    return 0;
}
