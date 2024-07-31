#include <stdio.h>

int array() {
    // Declare a 2D array of 3 rows and 3 columns
    int matrix[3][3];

    // Assign values to the 2D array
    int value = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = value++;
        }
    }

    // Print the values of the 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}
