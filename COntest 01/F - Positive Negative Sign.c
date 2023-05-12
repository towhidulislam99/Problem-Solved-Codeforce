#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        long long int n,m,prod;
        scanf("%lld%lld",&n,&m);
        prod = ((n*m)/2);
        printf("Case %d: %lld\n",i,prod);
    }
    return 0;
}
