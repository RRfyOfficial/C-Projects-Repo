#include <stdio.h>

int factorial(int n) { 
    // base case
    if (n == 0) {
        return 1;
    }

    return n * factorial(n-1);
}

int sum(int n){
    if (n == 0) {
        return n;
    }

    return n + sum(n-1);
}

int main(){
    printf("Factorial of 2 is = %d\n", factorial(2));
    printf("Factorial of 3 is = %d\n", factorial(3));
    printf("Factorial of 4 is = %d\n", factorial(4));
    printf("Factorial of 5 is = %d\n", factorial(5));
    printf("Factorial of 6 is = %d\n", factorial(6));
    printf("Factorial of 7 is = %d\n", factorial(7));
    printf("Factorial of 8 is = %d\n", factorial(8));

    printf("\n\n");

    printf("Sum of 4 is = %d\n", sum(4));
    printf("Sum of 5 is = %d\n", sum(5));
    printf("Sum of 6 is = %d\n", sum(6));
    printf("Sum of 7 is = %d\n", sum(7));
    printf("Sum of 8 is = %d\n", sum(8));
    printf("sum of 0 is = %d\n", sum(0));

    return 0;
}