#include <stdio.h>
#include <stdbool.h> // we need to include this header file too to be able to use boolean in our code

int main(){
    bool value1 = true;
    bool value2 = false;

    // In C Language, booleans are expressed by integer values
    // 1 = true
    // 0 = false

    printf("Value 1: %d, ", value1);
    printf("Value 2: %d\n", value2);

    return 0;
}