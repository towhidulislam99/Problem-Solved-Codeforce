#include<stdio.h>
int main()
{
    long long int n,a,b,c,d,e,i;
    scanf("%lld",&n);
    for(i=1;i<n;i++){
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a>b && a>c){
            d=a*a;
            e=b*b + c*c;
            }
     else if(b>a && b>c){
            d=b*b;
            e=a*a + c*c;
            }
     else if(c>a && c>b){
            d=c*c;
            e=a*a + b*b;
            }
     if(d==e)
            printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);
    }
    return 0;
}
