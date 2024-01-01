#include <stdio.h>

#define SIZE 10 // Assuming a square matrix of size 10x10

void printSpiral(int matrix[SIZE][SIZE]) {
    int i, rowStart = 0, colStart = 0;
    int rowEnd = SIZE - 1, colEnd = SIZE - 1;

    while (rowStart <= rowEnd && colStart <= colEnd) {
        // Print the top row
        for (i = colStart; i <= colEnd; ++i) {
            printf("%d ", matrix[rowStart][i]);
        }
        rowStart++;

        // Print the rightmost column
        for (i = rowStart; i <= rowEnd; ++i) {
            printf("%d ", matrix[i][colEnd]);
        }
        colEnd--;

        // Print the bottom row
        if (rowStart <= rowEnd) {
            for (i = colEnd; i >= colStart; --i) {
                printf("%d ", matrix[rowEnd][i]);
            }
            rowEnd--;
        }

        // Print the leftmost column
        if (colStart <= colEnd) {
            for (i = rowEnd; i >= rowStart; --i) {
                printf("%d ", matrix[i][colStart]);
            }
            colStart++;
        }
    }
}

int main() {
    int matrix[SIZE][SIZE];
    int num = 1;

    // Populate the matrix with numbers from 1 to SIZE*SIZE
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            matrix[i][j] = num++;
        }
    }

    // Print the matrix in a spiral pattern
    printSpiral(matrix);

    return 0;
}
