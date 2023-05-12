#include<stdio.h>
int main(){
    int num;
  scanf("%d",&num);
  while(num--){
  int temp,man,factor=1;
    scanf("%d",&man);
    temp = man;
    while(temp>0){
        factor =temp%10;
        printf("%d ",factor);
        temp= temp/10;
        }
        printf("\n");
  }
  return 0;
}
