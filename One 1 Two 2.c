#include <stdio.h>

int main (void){

    int a, b;
    scanf("%d\n%d", &a, &b);

    char table[11][6] = {"even", "odd","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for(int i = a; i <= b; i++){
        int tableAdr = i <= 9 ? i + 1 : i % 2;

        printf("%s\n", table[tableAdr]);

    }


    return 0;
}
