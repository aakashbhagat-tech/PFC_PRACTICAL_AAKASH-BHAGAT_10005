#include <stdio.h>//Aakash bhagat / ERP - 10005

int main() {
    for(int i=1;i<=4;i++){
        for(int j=0;j<i;j++){
            printf("%c", 'A'+j);
        }
        printf("\n");
    }
    return 0;
}
//o/p :-
//A
//AB
//ABC
//ABCD