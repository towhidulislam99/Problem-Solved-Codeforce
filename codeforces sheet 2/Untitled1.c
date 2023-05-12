#include <stdio.h>

int main() {

	int caseno;
	scanf("%d",&caseno);
    while(caseno--) {
        int num1,num2,sum=0;
        scanf("%d%d",&num1,&num2);
        if(num1>=num2) {
            int temp=num1;
            num1=num2;
            num2=temp;
        }
        if(num1%2==0) num1++;
        else num1+=2;
        if(num2%2==0) num2--;
        else num2-=2;
        int T1=num1/2, T2=num2/2+1;
        printf("%d\n",T2*T2-T1*T1);
    }
	return 0;
}
