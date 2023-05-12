#include<stdio.h>
int main()
{
    int n,num,total,i,lar;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     int ex1,ex2,ex3,ex4,ct1,ct2,ct3;
     scanf("%d%d%d%d%d%d%d",&ex1,&ex2,&ex3,&ex4,&ct1,&ct2,&ct3);
     num = ex1+ex2+ex3+ex4;
     lar = (ct1+ct2)/2;
     total = num + lar;
     if(total>=90)
        printf("Case %d: A\n",i);
     else if(total>=80)
        printf("Case %d: B\n",i);
    else if(total>=70)
        printf("Case %d: C\n",i);
    else if(total>=60)
        printf("Case %d: D\n",i);
    else if(total>=60)
        printf("Case %d: F\n",i);

    }
   return 0;
}


