#include<stdio.h>
#include<math.h>


int main()
{
    int input,sum,a,tc,i,b;

        while(scanf("%d",&tc)==1){

                for(i=1;i<=tc;i++){
                        scanf("%d",&input);

                        a=input;
                        sum=0;

                            while(input<9 || input>9){
                    if(input<=9){
                    sum=input;
                    break;
                    }
                            while(input!=0){
                                b=input%10;
                                sum=sum+(b*b);
                                input=input/10;
                            }
                                input=sum;
                                sum=0;

                            }

                            if(sum==1 || sum==7)
                            printf("Case #%d: %d is a Happy number.\n",i,a);
                            else
                            printf("Case #%d: %d is an Unhappy number.\n",i,a);

                }
        }

    return 0;
}
