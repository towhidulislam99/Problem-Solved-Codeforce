#include <stdio.h>

int main() {
	//code
	int caseno;
	scanf("%d",&caseno); //eta ami kotogulo paired no. input nibo tar shonkha
    while(caseno--) {
        int num1,num2,sum=0; //ar egulo pair gulo input nicchi
        scanf("%d%d",&num1,&num2);
        if(num1>num2) {   //ekhane ami choto num ta num1 e rakhchi
            int temp=num1;
            num1=num2;
            num2=temp;
        }
        if(num1%2==0) num1++;   //num1 even hole odd baniye niyechi
        else num1+=2;   //ar odd hole next bijorer shonkhay niye giyechi
        if(num2%2==0) num2--;  //ekhane minus korlam karon boro shonkhata include kora jabe na.
        else num2-=2;
        for(int i=num1;i<=num2;i+=2) {
            sum+=i;
        }
        printf("%d\n",sum);
    }
	return 0;
}
