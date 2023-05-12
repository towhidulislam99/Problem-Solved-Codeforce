#include<stdio.h>
int main()
{
    int n,sum=0,total;
    while(scanf("%d",&n))
    {
    sum = n/2;
    total = n+sum;
    printf("%d\n",total);
    }
    return 0;
}
