#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int i,a,b;
    for(i=1;i<=T;i++){
        scanf("%d%d",&a,&b);
        if(b==a){
            printf("Case %d: %d\n",i,(19+b*4));
        }
        else if(a<b){
            printf("Case %d: %d\n",i,(19+b*4));
        }
        else if (a>b){
            printf("Case %d: %d\n",i,(19+a*4+(a-b)*4));
        }
    }
    return 0;
}
