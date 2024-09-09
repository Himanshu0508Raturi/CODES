#include<stdio.h>

void calc(int[], int, int*);

int main() {
    int a[30], i, n, *p;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    p = a;
    for (i = 0; i < n; i++) {
        scanf("%d", p + i);
    }
    calc(a, n, p);
    printf("After calculations, the array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    return 0;
}

void calc(int a[], int x, int *pa) {
    int i;
    for (i = 0; i < x; i++) 
    {
        if (*(pa + i) > 0)
        {
            *(pa + i) -= 2;
            
        } else if (*(pa + i) < 0)
        {
            *(pa + i) += 1;
        }
    }
}
