#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  while(n--){
  int c,i;
  long long int f = 1;
  scanf("%d",&c);
  for (i= 2; i<=c ;i++){
  f *= i;
 }
 printf("%lld\n",f);
  }
 return 0;
}
