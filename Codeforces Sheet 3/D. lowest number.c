#include<stdio.h>
int main()
{
    long long int n,i,min=0;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++){
        if(min>=a[i]){
            min=a[i];
            printf("%lld %lld",min,i+1);
    }
    }

    return 0;
}
