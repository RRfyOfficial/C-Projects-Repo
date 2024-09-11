#include <stdio.h>

// returnType function(){}
void greet(){
    printf("Hello User! Excited to see you here!\n");
}

void calcSquare(int num) {
    int square = num * num;

    printf("Square of %d is %d\n", num, square);
}

void sum(int num1, int num2){
    int sum = num1 + num2;

    printf("Sum of %d and %d is = %d\n", num1, num2, sum);
}

// This is function prototype. Done if you don't want to declare a method before the main method. 
// C automatically knows which method to run when compiling
int sumReturn(int n1, int n2);

int multiplication(int n1, int n2);

// The main is the FIRST FUNCTION to be executed by a compiler!
int main(){
    greet();
    greet();
    greet();
    printf("After Function Call\n");

    printf("\n\n");

    calcSquare(2);
    calcSquare(6);
    calcSquare(42);

    printf("\n\n");

    sum(1,1);
    sum(2,9);
    sum(156889, 45678329);

    printf("\n\n");

    printf("Result of 1 + 1 is = %d\n", sumReturn(1,1));
    printf("Result of 2 + 9 is = %d\n", sumReturn(2,9));
    printf("Result of 156889 + 45678329 is = %d\n", sumReturn(156889,45678329));

    printf("\n\n");

    printf("Product of 2 and 2 is %d\n", multiplication(2,2));
    printf("Product of 7 and 8 is %d\n", multiplication(7,8));
    printf("Product of 4 and 15 is %d\n", multiplication(4,15));


    return 0;
}

int sumReturn(int n1, int n2){
    int sum = n1 + n2;

    return sum;

    printf("After return statement"); // this is never shown because anything after return statement doesn't happen!
}

int multiplication(int n1, int n2) { 
    int product = n1 * n2;

    return product;
}


