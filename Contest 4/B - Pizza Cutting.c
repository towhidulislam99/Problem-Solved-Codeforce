#include<stdio.h>

int main(){
    long long input;
    while(scanf("%lld", &input)){
        if(input < 0)
            return 0;

        /**
         * Arithmetic series 1 to n with extra 1
         n * ( n + 1 )/2
         */
        printf("%lld\n", 1 + input * (input + 1) / 2);
    }
    return 0;
}
