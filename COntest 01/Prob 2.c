#include<stdio.h>
int main()
{
 int n,m,a,b,sum=0;
 scanf("%d",&n);
 while(n){
    scanf("%d",&m);
    a= m/2;
    b = m-a;
    printf("%d %d\n",a,b);
    n--;
 }
 return 0;
}
