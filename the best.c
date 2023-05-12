#include <stdio.h>
int main()
{
    long long int frnd[4];
    long long int min = 10000000000000000000;
    int best = 0;
    int k = 0;
    for(int i = 0; i < 4; i++) {
        scanf("%lld", &frnd[i]);
    }
    for(int i = 0; i < 4; i++) {

        if(frnd[i] > frnd[i + 1]) {
            min = frnd[i + 1];
            //best++;

            k = i;
        }
        if(frnd[i] == min) best++;

    }
    if(best > 1) printf("We are the best\n");
    else {
        if(k == 0) printf("Amr\n");
        if(k == 1) printf("Waleed\n");
        if(k == 2) printf("Mustafa\n");
        if(k == 3) printf("Youssef\n");
    }
}
