#include <stdio.h>

void averageMarks(int s1, int s2, int s3, int s4, int s5){
    int marks[5] = {s1, s2, s3, s4, s5};
    double sum = 0.0; // initialize to 0.0 to avoid it being a garbage value

    // both ++i and i++ works in for loop
    // we just use ++i because it makes program more efficient; i++ tends to make copy and can cause overhead when running
    for (int i = 0; i < 5; ++i) {
        sum += marks[i]; // no need to cast int to double since upcasting is safe to do so
    }

    double result = (sum / 5.0);
    printf("Average marks are :: %.2lf\n", result);
}

int main(){
    // dataType arrayName[arraySize]; --> size of array IS FIXED
    
    int age[5] = {21, 29, 25}; //4th and 5th position will equal zero

    printf("First value in array is :: %d\n", age[0]);
    printf("Second value in array is :: %d\n", age[1]);
    printf("Third value in array is :: %d\n", age[2]);
    printf("Fourth value in array is :: %d\n", age[3]); // value should be 0
    printf("Fifth value in array is :: %d\n", age[4]); // value should be 0

    printf("\n\n");

    // assigning values using index numbers
    age[3] = 69;
    age[4] = 420;

    // ask user to assign values
    printf("Enter 5 input values:\n");

    scanf("%d", &age[0]);
    scanf("%d", &age[1]);
    scanf("%d", &age[2]);
    scanf("%d", &age[3]);
    scanf("%d", &age[4]);

    printf("\n");

    printf("Index 1: %d\n", age[0]);
    printf("Index 2: %d\n", age[1]);
    printf("Index 3: %d\n", age[2]);
    printf("Index 4: %d\n", age[3]);
    printf("Index 5: %d\n", age[4]);
    
    return 0;
}