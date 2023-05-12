#include<stdio.h>
int main()
{
    long long int n,m,sum;
    scanf("%lld%lld",&n,&m);
    sum = (n%10) + (m%10);
    printf("%lld\n",sum);
    return 0;
}
