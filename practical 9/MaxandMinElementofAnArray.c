// Aakash bhagat| ERP = 10005
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}


// output

// Enter number of elements: 6
// Enter array elements:
// 12 5 20 8 3 15
// Maximum element = 20
// Minimum element = 3
