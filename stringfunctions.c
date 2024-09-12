#include <stdio.h>
#include <string.h> // all the string functions for you

int main(){
    char language[] = "C Program";

    printf("%s\n", language);

    printf("\nLength: %zu\n", strlen(language)); // get length of string


    char food[] = "Pizza";
    char bestFood[5];
    
    strcpy(bestFood, food); // copying contents from one string to another
    printf("%s\n", bestFood);

    // concat strings
    char str1[] = "hello";
    char str2[] = "how are you";
    strcat(str1, str2);
    printf("%s\n", str1);


    // compare strings
    printf("%d\n", strcmp(str1, str2));
    printf("%d\n", strcmp(str2, str1));

    return 0;
}