#include <stdio.h>//Aakash bhagat / ERP - 10005

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=n;i>=1;i--){
        for(int s=0;s<n-i;s++) printf(" ");
        for(int j=1;j<=2*i-1;j++) printf("*");
        printf("\n");
    }

    for(int i=2;i<=n;i++){
        for(int s=0;s<n-i;s++) printf(" ");
        for(int j=1;j<=2*i-1;j++) printf("*");
        printf("\n");
    }
    return 0;
}
//o/p:-
//*****
 //***
  //*
 //***
//*****