#include<stdio.h>
int main()
{
    int testcase,testcase1;
    scanf("%d",&testcase);
    int i,j;
    for(i=0;i<testcase;i++){
        int in1,in2,in3,in4,out1,out2;
        printf("Case %d:\n",i+1);
        scanf("%d%d%d%d",&in1,&in2,&in3,&in4);
        scanf("%d",&testcase1);
        for(j=0;j<testcase1;j++){
            scanf("%d%d",&out1,&out2);
              if((out1>=in1&&out1<=in3)&&(out2>=in2&&out2<=in4)){
                printf("Yes\n");
            }
            else
                printf("No\n");
        }

    }
    return 0;
}
