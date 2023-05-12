#include<stdio.h>
int main()
{
    int n;
    long long int i,input,pos=-1;
    scanf("%d",&n);
    long long int a[n];
    for(i=0;i<n;i++){
    scanf("%lld",&a[i]);
    }
    scanf("%lld",&input);
    for(i=0;i<n;i++){
    if(input==a[i]){
            pos=i;
            break;
    }
    }
        printf("%lld",pos);
        return 0;
    }


