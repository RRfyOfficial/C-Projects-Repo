#include <stdio.h>

int main(){
    // no


    double a = 5.67;
    printf("Data is lost: %d\n", a);

    int b = 9;

    int result = (int)a + b;
    printf("Adding while all values being as int values: %d\n", result);
    printf("If you wanted the output to be in integer format %d\n", result);

    double dResult = (double) 9/2;
    printf("Result of division: %lf\n", dResult);


    return 0;
}