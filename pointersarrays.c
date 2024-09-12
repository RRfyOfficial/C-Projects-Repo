#include <stdio.h>

int largestValueArray(int arr[]);

int main() {
    int numbers[5] = {1,3,5,7,9};

    for (int i = 0; i < 5; ++i) {
        printf("%d = %p\n", numbers[i], &numbers[i]);
    }

    printf("Array address: %p\n", numbers); // pointer of array is the same as the first element of array

    // this is how you access an array value's address using pointers!
    printf("Array address of 1: %p\n", numbers);
    printf("Array address of 3: %p\n", numbers + 1);
    printf("Array address of 5: %p\n", numbers + 2);

    // a more better way to access stuff with the for loop
    for (int i = 0; i < 5; ++i) {
        printf("%d = %p\n", *(numbers + i), numbers + i); // boom looks neat!
    }

    // changing values in arrays using pointers
    *numbers = 2; // changing first value of array from 1 to 2
    *(numbers + 4) = 11; // changing the last value of array from 9 to 11

    printf("%d\n", *numbers);
    printf("%d\n", *(numbers + 4));

    int arr[] = {34, 12, 21, 54, 48};
    printf("Largest value in the array is %d\n", largestValueArray(arr));

    return 0;
}

// In C, it's not necessary that you need to write a return statement for return-type methods
// But you don't wanna do that, it can return any value if that happens
// Usually it would be a value last fetched by the CPU, which in this case would be 48 cuz that's the last value processed
int largestValueArray(int arr[]){
    int value = *arr;
    int length = sizeof(arr)/sizeof(arr[0]);

    for (int i = 1; i < 5; ++i){
        int num = *(arr + i);
        if (num > value){
            value = num;
        }
    }

    return value;
}