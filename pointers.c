#include <stdio.h>

void newSalaryPointer(double salary){
    double* newSalary = &salary;

    printf("\n\n");

    printf("The value of the current salary is = %.lf\n", *newSalary);

    *newSalary *= 2;

    printf("The value of the new salary is = %.lf\n", *newSalary);
}

int main() {
    int age = 25;

    printf("%p", &age); // shows the address where age is stored in memory (location is different every time)


    // making a pointer variable

    // you can also do "int *ptr" but isn't recommended because it can lead to syntax confusion (*ptr means dereferencing too that's why)
    int* ptr; 
    ptr = &age; // pointer should be storing the memory address of age
    
    printf("\nThis is what ptr is storing: %p", ptr);
    printf("\nThis is the value which the memory address belongs to: %d", *ptr);

    printf("\n\n");

    // changing values with pointer variables
    *ptr = 31; // changing value from 25 to 31

    printf("\nThe new value from the pointer is now: %d", *ptr);

    double salary = 200000.0;
    newSalaryPointer(salary);

    return 0;
    
    // Invalid use case of pointers
    /*
    int number;
    int* ptr;

    ptr = number; --> doesn't work because pointers store only memory addresses, not values
    *ptr = &number; --> this also doesn't work putting memory address while dereferencing pointer doesn't work
    */

   // Valid use case of pointers
   /*
    int number;
    int* ptr;

    ptr = &number; --> doesn't work because pointers store only memory addresses, not values
    *ptr = number; --> this also doesn't work putting memory address while dereferencing pointer doesn't work
    */
}