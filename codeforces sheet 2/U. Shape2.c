#include<stdio.h>
int main()
{
    int nrow;
    scanf("%d",&nrow);
    int row,colmspc,colstr;
    for(row=1;row<=nrow;row++){
        for(colmspc=nrow-row;colmspc>=1;colmspc--){
            printf(" ");
        }
        for(colstr=1;colstr<=(row*2)-1;colstr++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
