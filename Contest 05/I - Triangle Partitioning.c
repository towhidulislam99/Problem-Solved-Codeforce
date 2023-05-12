#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    double ab,ca,bc,ade,ad;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lf%lf%lf%lf",&ab,&ca,&bc,&ade);
        ade = ade/(ade+1);
        ad=ab*sqrt(ade);
        printf("Case %d: %lf\n",i,ad);
    }
    return 0;
}
