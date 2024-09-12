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

    return 0;
}