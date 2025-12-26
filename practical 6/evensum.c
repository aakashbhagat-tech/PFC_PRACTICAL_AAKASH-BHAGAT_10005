#include<stdio.h>
int main(){
  int n,sum=0;
  printf("Enter limit: ");
  scanf("%d",&n);

  for(int i = 1;i<=n;i++){
    if(i % 2!=0)
    continue;
    sum+=i;
  }
  printf("sum of even numbers = %d",sum);
  return 0;
}
