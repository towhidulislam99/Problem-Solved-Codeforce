#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    sum = (n*(n+1)*(2*n+1))/6;
    for(i=1;i<=n;i++){
        if(i!=n)
            printf("%d^2 + ",i);
        else
            printf("%d = %d",i,sum);
    }
    return 0;
}
