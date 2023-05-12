#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c,d,l,cn,i,sum;
    while(scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&l)==5)
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;
            cn=0;
        for(i=0;i<=l;i++){
            sum = (a*i*i)+(b*i)+c;
            if(sum%d==0)
                cn++;
        }
        printf("%lld\n",cn);
    }
    return 0;
}
