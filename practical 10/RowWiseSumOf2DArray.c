// AYUSH RAJ | ERP = 10352
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int arr[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the 2D array:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {
        int sum = 0;
        for(j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}

// OUTPUT
// Enter number of rows and columns: 3 3
// Enter elements of the 2D array:
// 1 2 3
// 4 5 6
// 7 8 9
// Sum of row 1 = 6
// Sum of row 2 = 15
// Sum of row 3 = 24
