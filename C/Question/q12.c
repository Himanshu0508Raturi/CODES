/*Write a C program to accept N integers from the user into an array. If any integer is 
positive then subtract 2 from it, if integer is negative add 1 to it and if zero then do nothing. 
Implement a UDF using a pointer to perform these operations and finally display the 
modified array to the screen in the calling program.*/
#include<stdio.h>
void calc(int[], int, int*);
void main() {
    int a[30], i, n, *p;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    p = a;
    for (i = 0; i < n; i++) {
        scanf("%d", p + i);
    }
    calc(a, n, p);
    for (i = 0; i < n; i++)
     {
        printf("%d ", *(p + i));
    }

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
