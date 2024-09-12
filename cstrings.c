#include <stdio.h>

// make sure that [] is after the name of the string, not after char!
void changeName(char name[]){
    name[0] = 'X';

    printf("New name is %s\n", name);
}

int main(){
    char str[] = "Program"; // char str[] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', '\0'}

    printf("%s\n", str); // %s is used to format strings in C

    // printf("Enter your name: ");
    // scanf("%s", str); // you don't need & before str because it's an array, and array automatically points to the characters for ya
    // printf("Your name is %s\n\n", str);

    // // Clear the input buffer
    // getchar(); // This consumes the leftover newline character from scanf --> allows you to do multiple inputs


    // char str2[50]; // Array to store the input with enough space for full names

    // printf("Enter your full name: ");
    // fgets(str2, sizeof(str2), stdin); // if you want to include spaces in the input
    // printf("Your full name is %s\n\n", str2);


    // Access characters of a string
    char str3[] = "Ortega";

    for (int i = 0; i < sizeof(str3); ++i) {
        printf("%c ", str3[i]);
    }

    printf("\n");


    // Assign values in string
    str3[4] = 'j';

    printf("%s\n", str3);

    char russ[] = "Russell";

    changeName(russ);

    return 0;
}