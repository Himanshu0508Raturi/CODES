#include <stdio.h>
#include <stdlib.h>

void allocateMemory(int **ptr, int size) {
    *ptr = (int *)malloc(size * sizeof(int));
    if (*ptr == NULL) 
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
}

int main() {
    int *array;
    int size = 5;
    
    // Passing the address of the pointer to the function
    allocateMemory(&array, size);
    
    // Assigning values
    for (int i = 0; i < size; i++) {
        array[i] = i * 10;
        printf("%d ", array[i]);
    }
    printf("\n");
    
    // Free allocated memory
    free(array);
    return 0;
}
