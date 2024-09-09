#include <stdio.h>

int main()
{
    // int age;

    // printf("Yo what's your age? ");
    // scanf("%d", &age);

    // printf("\nAge = %d", age);

    
    // //take 2 inputs
    // double number;
    // char alphabet;

    // printf("\nEnter input values: ");
    // scanf("%lf %c", &number, &alphabet);

    // printf("Number: %.2lf\nCharacter: %c", number, alphabet);

    
    //input practice
    double x;
    char a;

    printf("\nEnter double value: ");
    scanf("%lf", &x);

    printf("\nEnter character value: ");
    scanf(" %c", &a); // you have to add a space before %c to be able to read character input

    printf("Values are %lf and %c", x, a);

    return 0;
}