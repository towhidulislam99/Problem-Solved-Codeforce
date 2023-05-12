
#include <stdio.h>

int main()
{
    int j;
    scanf("%d",&j);
        while(j--){
        int number,cnt,i;
        scanf("%d",&number);
        int bin[32];
        cnt=0;
    while(number>0)
    {
        bin[cnt]=number%2;
        number=number/2;
        cnt++;
    }

    for(i=(cnt-1); i>=0;i--)

        printf("%d",bin[i]);
        printf("\n");
         }
    return 0;
}



