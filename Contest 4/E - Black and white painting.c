#include <stdio.h>

int main() {
    int row, col, c;
    while(scanf("%d %d %d", &row, &col, &c) == 3) {
        if(row+col+c == 0)
            break;
        if(c == 0) {
            printf("%d\n", (row-7)*(col-7)/2);
        } else {
            printf("%d\n", ((row-7)*(col-7)+1)/2);
        }
    }
    return 0;
}
