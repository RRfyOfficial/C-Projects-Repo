#include <stdio.h>
/* all arithmetic operators:
   + Addition
   - Subtraction
   * Multiplication
   / Division
   % Remainder
   ++ Increment (increments by 1)
   -- Decrement (decrements by 1)
*/

int main(){
    int x = 12;
    int result = x + 8; // 12 + 8 = 20

    printf("Result is %d\n", result);
    printf("Result is now %d\n", result + 8); //should display 28
    printf("Result is now %d\n\n", result - 2);

    double val = 12.57;
    int y = 8;

    double newResult = val + y;
    
    printf("New Result is %.2lf\n", newResult);
    printf("New Result is now %.5lf\n\n", newResult + 3.1415926);


    int divResult = x/8;
    printf("Divided Result is %d\n", divResult);
    
    double d1 = 12.00;
    double divResult2 = d1/8.00;
    printf("Divided Result is now %.2lf\n\n", divResult2);


    // Modulus only works with integer values!
    int v1 = 7;
    int v2 = 3;
    int mod = v1 % v2;
    int mod2 = v2 % v1; 
    printf("mod is %d\n", mod);
    printf("mod2 is %d\n\n", mod2);

    
    // Pre-increment and Post-increment
    int iVal = 12;

    printf("Pre-increment: %d\n", ++iVal);
    printf("Post-increment: %d\n", iVal++);
    printf("Value updates now for iVal: %d\n\n", iVal);

     // Pre-decrement and Post-decrement
    iVal = 12;

    printf("Pre-decrement: %d\n", --iVal);
    printf("Post-decrement: %d\n", iVal--);
    printf("Value updates now for iVal: %d\n", iVal);


    return 0;
}