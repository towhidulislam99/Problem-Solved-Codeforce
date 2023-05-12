#include<stdio.h>
int main()
{
    int n,total;
    while(scanf("%d",&n))
    {
    total = n;
    while(n>=3){
         int re = n/3;
         total = total + re;
         n = re + (n%3);
    }
    printf("%d\n",total);
    }
    return 0;
}
