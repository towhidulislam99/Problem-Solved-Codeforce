#include<stdio.h>
int main()
{
    int a,b,c,total,n,i;
    while(scanf("%d",&n))
    {
    for(i=1;i<=n;i++){
        scanf("%d%d%d",&a,&b,&c);
        total = b+c;
        if(total>a){
            total = total-a;
        }
        printf("Case %d: %d\n",i,total);
    }
    }
    return 0;
}
