#include <stdio.h>\

/*
int (4 bytes)     | %d
double (8 bytes)  | %lf
float (4 bytes)   | %f
char (1 byte)     | %c
*/

/*
4 bytes = 32 bit
8 bytes = 64 bit
*/


int main()
{
    double number = 13.4567;
    printf("%.2lf", number);

    float number1 = 19.9f; //need to put "f" after every float value
    printf("\n%.1f", number1);


    double n = 5.5e6; //5.5 * 10^6
    printf("\n%.1lf", n);


    char character = 'z';
    printf("\n%c", character);
    printf("\n%d", character); //get integer value of character --> characters are internally stored as integers


    /*
        %zu is format specicifier for "sizeof" operator in C
    */

    printf("\n\n");

    int num;
    printf("\nint size = %zu bytes", sizeof (num));

    double x;
    printf("\ndouble size = %zu bytes", sizeof (x));

    return 0;
}