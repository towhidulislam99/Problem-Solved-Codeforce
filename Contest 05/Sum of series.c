#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    sum = pow(((n*(n+1))/2),2);
    for(i=1;i<=n;i++){
        if(i!=n)
            printf("%d^3 + ",i);
        else
            printf("%d = %d ",i,sum);
    }
    return 0;
}
