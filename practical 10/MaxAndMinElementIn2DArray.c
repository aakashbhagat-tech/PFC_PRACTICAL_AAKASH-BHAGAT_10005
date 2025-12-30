// Aakash Bhagat |ERP= 10005
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int arr[10][10];
    int max, min;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the 2D array:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    max = min = arr[0][0];

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(arr[i][j] > max)
                max = arr[i][j];
            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}


// output

// Enter number of rows and columns: 2 3
// Enter elements of the 2D array:
// 4 7 1
// 9 3 6
// Maximum element = 9
// Minimum element = 1

