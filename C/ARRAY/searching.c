/*Q14. Develop a C program to search for an element in a sorted array. Implement it using Binary Search
Name : Himanshu Raturi
Roll No. : 33
Section : B2
Couse : B.Tech
Branch : CSE */
#include <stdio.h>
int main() {
    int n,num,arr[20];
    printf("Enter Size:");
    scanf("%d", &n);
    printf("Enter elements in array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter a number: ");
    scanf("%d", &num);
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (num == arr[mid]) {
            printf("Key found at index %d\n", mid);
            break;
        } else if (arr[mid] < num) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    if (s > e) {
        printf("Key not found!\n");
    }
    return 0;
}
