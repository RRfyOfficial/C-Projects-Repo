#include <stdio.h>

// creating an enum with different size options
// enums in C are based on the idea of INTEGRAL CONSTANTS
enum Size {
    Small, // integral constant = 0
    Medium, // integral constant = 1
    Large, // integral constant = 2
    ExtraLarge // integral constant = 3
};

// we can also change the integral constants in enums if we want
// Use different names to avoid redeclaration conflicts
enum SizeMod {
    Small_Mod = 27,
    Medium_Mod = 31,
    Large_Mod = 35,
    ExtraLarge_Mod = 40
}; 

// we can also just declare an enum while setting up an enum at the same time!
enum Emotion {
    angy = 10,
    happy = 11,
    sad = 12,
} emotion;


int main() {    
    enum Size shoeSize;

    shoeSize = ExtraLarge;

    // returns 3 because ExtraLarge's integral constant is 3 according to Size enum
    printf("%d\n", shoeSize);


    enum SizeMod shoeSize1 = Small_Mod;
    enum SizeMod shoeSize2 = Medium_Mod;
    enum SizeMod shoeSize3 = Large_Mod;
    enum SizeMod shoeSize4 = ExtraLarge_Mod;

    printf("\n\n");

    printf("%d\n", shoeSize1);
    printf("%d\n", shoeSize2);
    printf("%d\n", shoeSize3);
    printf("%d\n", shoeSize4);

    
    printf("\n\n");

    emotion = sad; // keep in mind we alr declared an enum while making one in the start
    printf("%d\n", emotion); // should return 12

    return 0;
}