#include <stdio.h>

void changeNumber(int* num){
    *num = 39;
}

void findSquare(int* num){
    int square = *num * *num;

    printf("%d squared is equal to = %d\n", *num, square);
}

int* returnPointer(int num){
    int* ptr = &num;

    return ptr;
}

int main(){
    int number = 21;
    printf("Original number is %d\n", number);
    
    changeNumber(&number);
    printf("New number is %d\n", number);

    int value = 7;
    findSquare(&value); // don't forget to store the memory address of the int value cuz it's a pointer
    
    int num = 768;
    int* ptr = returnPointer(num);
    printf("Pointer of %d is %p\n", num, ptr);

    return 0;
}