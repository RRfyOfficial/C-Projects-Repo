#include <stdio.h>

int main()
{
    printf("c-programming\n");

    int age = 25;
    printf("%d\n", age);
    printf("The age is: %d\n", age);

    int Age = 17;
    printf("Age 1 is %d\nAge 2 is %d\n", age, Age);


    char a = 'a';
    printf("%c\n", a);

    char* string = "russell";
    printf("The string is %s\n", string);

    float num = 5.789;
    printf("The float value is %f\n", num);
    printf("The float value in one decimal place is %.1f\n", num);

    double numDouble = 8.967347;
    printf("The double value is %lf\n", numDouble);
    printf("The double value in 2 decimal places is %.2lf\n", numDouble);

    
    printf("\n\n\n");


    int firstNumber = 33;
    printf("firstNumber = %d", firstNumber);

    int secondNumber = firstNumber;
    printf("\nsecondNumber = %d", secondNumber);


    return 0;
}