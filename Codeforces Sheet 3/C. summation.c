#include<stdio.h>
#include <stdlib.h>
int main()
{
     int n,i;
     scanf("%d",&n);
    long long int a[n],sum=0;
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++){
       sum+= a[i];
    }
    printf("%lld",sum);
    return 0;
}
