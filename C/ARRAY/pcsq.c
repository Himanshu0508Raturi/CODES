#include <stdio.h>
int main() {
    int n,num,arr[20],mid,s,e;
    printf("Enter Size:");
    scanf("%d", &n);
    printf("Enter elements in array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter a number: ");
    scanf("%d", &num);
     s = 0;
     e = n - 1;
    while (s <= e) {
         mid = (s + e) / 2;
        if (num == arr[mid]) {
            printf("Number found at index %d\n", mid);
            break;
        } else if (arr[mid] < num) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    if (s > e) {
        printf("Number not found!\n");
    }
    return 0;
}
