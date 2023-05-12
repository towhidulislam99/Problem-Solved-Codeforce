#include<stdio.h>

int main(){
    int num;
  scanf("%d",&num);
  while(num--){
  long long int i,temp,man,factor=1;
    scanf("%lld",&man);
   temp=man;

  while(temp){
        temp=temp/10;
        factor = factor*10;
    }

    while(factor>1){

      factor = factor/10;

      printf(" %d ",man/factor);

      man = man % factor;

  }
  printf("\n");
  }
  return 0;
}
