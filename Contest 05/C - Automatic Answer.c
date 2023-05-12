#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum,sum1,sum2,sum3,total,to,t1,i,test;
    while (scanf("%d",&test)==1){
      for(i=0;i<test;i++)
      {
    scanf("%d",&n);
    sum =((n*567)/9);
    sum1 = 7492 + sum;
    sum2 = 235 * sum1;
    sum3 = sum2/47;
    total = sum3 - 498;
    to = total % 100;
    t1 = abs(to/10);
    printf("%d\n",t1);
      }
    }
    return 0;
}



