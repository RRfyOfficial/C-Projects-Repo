#include <stdio.h>

int main() {
    int* ages;

    // Allocate memory for 4 integers using malloc
    // we cast to (int*) because malloc returns void* --> casting allows pointer arithmetic & dereferencing
    ages = (int*) malloc(4 * sizeof(int));
    
    if (ages == NULL) {
        printf("Memory allocation failed!\n");
        return 0; // Exit if malloc fails
    }

    // Get 4 input values for the array
    for (int i = 0; i < 4; ++i) {
        printf("Enter value for index %d: ", i);
        scanf("%d", &ages[i]);
    }

    // Print the 4 array elements
    printf("\nArray elements:\n");
    for (int i = 0; i < 4; ++i) {
        printf("Index %d = %d\n", i, ages[i]);
    }

    // Resize the array to store 6 elements using realloc
    ages = realloc(ages, 6 * sizeof(int));
    if (ages == NULL) {
        printf("Memory reallocation failed!\n");
        return 1; // Exit if realloc fails
    }

    // Assign 32 and 59 to the 5th and 6th elements
    ages[4] = 32;
    ages[5] = 59;

    // Print all 6 array elements
    printf("\nUpdated array elements:\n");
    for (int i = 0; i < 6; ++i) {
        printf("Index %d = %d\n", i, ages[i]);
    }

    // Free allocated memory
    free(ages);

    return 0;
}