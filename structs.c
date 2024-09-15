#include <stdio.h>

struct Person {
    double salary;
    int age;
};

// more simple way to make a struct
typedef struct {
    double salary;
    int age;
} Persona;

typedef struct Complex {
    double real;
    double imagine;
} complex;

int main() {
    struct Person person1;
    person1.salary  = 25.65;
    person1.age = 19;

    printf("Age of Person 1: %d\n", person1.age);
    printf("Salary of Person 1: %lf\n", person1.salary);


    Persona person2; // no need to write struct if you did it the simple way
    person2.age = 18;
    person2.salary = 7893.45;
    printf("Age of Person 2: %d\n", person2.age);
    printf("Salary of Person 2: %lf\n", person2.salary);

    printf("\n\n");


    // simple way to initialize structs ---> doesn't work with typedef if you don't declare the struct type first (see Complex)!
    struct Person newPerson = {.age = 25, .salary  = 4321.78};
    printf("Age of Person 2: %d\n", newPerson.age);
    printf("Salary of Person 2: %lf\n", newPerson.salary);


    complex c1 = {.real = 21.87, .imagine = 30};
    complex c2 = {.real = 13.34, .imagine = 112.23};

    complex sum = {.real = (c1.real + c2.real), .imagine = (c1.imagine + c2.imagine)};

    printf("\n\n");
    printf("Result is %.2lf + %.2lfi", sum.real, sum.imagine);

    return 0;
}