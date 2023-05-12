#include<stdio.h>
int main()
{
    int in1,in2,in3,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;++i){
        scanf("%d%d%d",&in1,&in2,&in3);
        printf("Case %d: ", i);
        if((in1>in2 && in1<in3) || (in1>in3 && in1<in2) )
            printf("%d\n", in1);
        else if((in2>in1 && in2<in3) || (in2<in1 && in2>in3))
            printf("%d\n",in2);
        else
            printf("%d\n", in3);
    }
    return 0;
}
