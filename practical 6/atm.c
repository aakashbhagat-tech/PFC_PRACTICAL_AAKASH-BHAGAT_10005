#include<stdio.h>
int main(){//Aakash bhagat //ERP - 10005
  int pin,originalpin = 1234;

  printf("enter ATM PIN: ");
  scanf("%d",&pin);
  if(pin==originalpin)
  printf("Access granted");
  else
  printf("wrong PIN");
  return 0;
}

//o/p :
//