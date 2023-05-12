#include<stdio.h>
int main()
{
    int x,n,i;
    int pcn=0,ncn=0,ecn=0,ocn=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
        scanf("%d",&x);
        if(x>=0){
        pcn++;}
       else {
        ncn++;}
      if(x%2==0){
        ecn++;}
       else{
        ocn++;}
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",ecn,ocn,(pcn-1),ncn);
    return 0;
}
