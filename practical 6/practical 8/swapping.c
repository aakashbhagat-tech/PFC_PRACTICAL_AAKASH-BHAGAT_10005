#include <stdio.h> //Aakash bhagat/ERP - 10005

void swap(int *a, int *b) {
    
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("After swapping:\n");
    printf("x = %d, y = %d", x, y);

    return 0;
}




// output
// Enter two numbers: 4
// 6
// After swapping:
// x = 6, y = 4