#include <stdio.h>

int main(){
    // // dataType matrix[row][column] = {
    // {1, 2, 3, 4},  // 0th row
    // {5, 6, 7, 8},  // 1st row
    // {9, 10, 11, 12} // 2nd row
    // };

    int arr[2][3] = {
        {1,3,5}, // row 0
        {2,4,6} // row 1
    };

    printf("row 0 col 0 :: %d\n", arr[0][0]);
    printf("row 1 col 2 :: %d\n", arr[1][2]);

    printf("\n\n");

    // assign values to multi-dimensional arrays
    arr[0][2] = 7;
    arr[1][1] = 8;

    printf("row 0 col 2 :: %d\n", arr[0][2]);
    printf("row 1 col 1 :: %d\n", arr[1][1]);

    printf("\n\n");


    // access multidimensional array for loop
    
    // i is the row
    for (int i = 0; i < 2; ++i){ 

        // j is the column
        for (int j = 0; j < 3; ++j){ 
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}