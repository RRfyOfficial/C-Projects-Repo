#include <stdio.h>
#include <stdbool.h>

int main(){
    bool v1 = (12 > 9);
    printf("%d\n", v1); //return 1 cuz it's true

    v1 = (5 > 9);
    printf("%d\n", v1); //return 0 cuz it's false

    v1 = (5 == 5);
    printf("%d\n", v1); //return 1 cuz it's true

    v1 = (5 != 9);
    printf("%d\n", v1); //return 1 cuz it's true

    v1 = (9>=0);
    printf("%d\n", v1); //return 1 cuz it's true

    v1 = (9<=6);
    printf("%d\n\n", v1); //return 0 cuz it's false


    // compare variables
    int num1 = 9;
    int num2 = 6;

    bool value = num1 > num2;
    printf("%d\n", value); // return 1 cuz it's true

    value = num1 < 5;
    printf("%d\n\n", value); //return 0 cuz it's false


    /*Logical Operators
        && = AND
        || = OR
        ! = NOT
    */ 
   bool result = (num1 > num2) && (num1 == 9);
   printf("%d\n", result);

   result = (num1 > num2) || (num1 == 6);
   printf("%d\n", result);

   result = !(num1 == 9); //it's true, but now it's false because of NOT operator
   printf("%d\n\n", result); //return 0 cuz it's false 

    return 0;
}