#include <stdio.h> //Aakash bhagat / ERP - 10005
void printTriangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}


int main() {
    int n;
    scanf("%d", &n);
    printTriangle(n);
    return 0;
}



// output
// 4
// * 
// * * 
// * * * 
// * * * *