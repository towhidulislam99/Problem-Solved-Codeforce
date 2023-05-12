#include<stdio.h>
int main()
{
    int n;
    long long i;
    scanf("%d",&n);
    long long int a[n];
    for(i=0;i<n;i++){
    scanf("%lld",&a[i]);
    }
    for(i=n-1;i>=0;i--){
    printf("%lld ",a[i]);
    }
    return 0;
}
