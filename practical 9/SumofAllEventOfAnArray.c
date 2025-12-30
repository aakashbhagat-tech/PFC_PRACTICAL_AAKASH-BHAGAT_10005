// Aakash bhagat | ERP = 10005
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    printf("Sum of even elements = %d\n", sum);

    return 0;
}


//OUTPUT

// Enter number of elements: 7
// Enter array elements:
// 1 2 3 4 5 6 7
// Sum of even elements = 12
