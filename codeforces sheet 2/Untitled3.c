#include<stdio.h>
int main()
{
    int x[100],n,i;
    int pcn=0,ncn=0,ecn=0,ocn=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x[i]);
        if(x[i]>0)
        pcn++;
        else if(x[i]<0)
            ncn++;
       if(x[i]%2==0)
        ecn++;
       else
        ocn++;
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",ecn,ocn,pcn,ncn);
    return 0;
}
