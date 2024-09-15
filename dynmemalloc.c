#include <stdio.h>

int main() {
    int var = 32;
    int* ptr = &var;
    printf("%d\n", *ptr);

    // malloc --> reserve block of memory for specific size
    int n = 4;
    int* ptrN;

    ptrN  = (int*) malloc(n * sizeof(int)); // 4 bytes * 100 = 400 bytes of memory

    if (ptrN == NULL) {
        printf("Memory cannot be allocated");
        return 0;
    }

    printf("Enter input values:\n");

    for (int i = 0; i < n; ++i) {
        scanf("%d", ptrN + i);
    }

    printf("Input Values: \n");
    for (int i = 0; i < n; ++i) {
        printf("%d\n", *(ptrN + i));
    }


    printf("Allocated Memory:\n");
    for (int i = 0; i < n; ++i) {
        printf("%p\n", ptrN + i);
    }

    n = 6;
    ptrN = realloc(ptrN, n * sizeof(int));

    printf("Newly Allocated Memory\n");
    for (int i = 0; i < n; ++i) {
        printf("%p\n", ptrN + i);
    }

    free(ptrN);

    return 0;
}