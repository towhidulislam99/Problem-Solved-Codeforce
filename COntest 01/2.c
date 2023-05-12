#include<stdio.h>
int main()
{
 int a,i=1,b,c,sum=0;
 scanf("%d",&a);
 while(a){
  scanf("%d%d",&b,&c);
  sum=b+c;
  printf("Case %d: %d\n",i,sum);
i++;
a--;
}
return 0;
}
