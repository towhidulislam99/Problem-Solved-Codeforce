#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    sum = (n*(n+1))/2;
    for(i=0;i<=n;i++){
        if(i!=n)
            printf("%d + ",i);
        else
            printf("%d = %d ",i,sum);
    }
    return 0;
}
