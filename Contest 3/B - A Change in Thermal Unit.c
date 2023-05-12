#include<stdio.h>
int main()
{
    int n,i;
    float a,b,diff;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++){
            scanf("%f%f",&a,&b);
            diff = ((5.0/9.0)*b+a);
            printf("Case %d: %.2f\n",i,diff);
        }
    }
    return 0;
}
