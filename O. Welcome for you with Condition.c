#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    if(a>=b)
    {
        printf("Yes");
    }
    else if(a<b)
    {
        printf("No");
    }
    return 0;
    }
