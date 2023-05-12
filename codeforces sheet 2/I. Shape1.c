
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int col = n;
    for(i=1;i<=n;i++){
       for(j=1;j<=col;j++){
        printf("*");
       }
       printf("\n");
       col--;
    }
     return 0;
}
