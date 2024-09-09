#include <stdio.h>
#include <stdbool.h> // we need to include this header file too to be able to use boolean in our code

int main(){
    bool value1 = true;
    bool value2 = false;

    // In C Language, booleans are expressed by integer values
    // 1 = true
    // 0 = false

    printf("%d, ", value1); // should return 1 cuz it's true
    printf("%d\n", value2); // should return 0 cuz it's false

    return 0;
}