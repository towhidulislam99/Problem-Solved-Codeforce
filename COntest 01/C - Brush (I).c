#include<stdio.h>
int main()
{
    int t,n,m,i,j,sum=0;
    scanf("%d",&t);
    for(j=1;j<=t;j++){
        scanf("%d",&m);
        for(i=0,sum=0;i<m;i++){
            scanf("%d",&n);
            if(n>=0){
                sum+=n;
            }
        }
    printf("Case %d: %d\n",j,sum);
    }
    return 0;
}
