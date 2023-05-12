#include<stdio.h>
int main()
{
    int n;
    while(n--){
        int m;
        scanf("%d",&m);
        if(m==1999){
            printf("Correct\n");
            break;
        }
        else
            printf("Wrong\n");
    }
    return 0;
}
