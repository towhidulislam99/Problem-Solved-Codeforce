#include <stdio.h>

int main()
{
    int number = 1;

    while(number != 1999)
    {
        scanf("%d", &number);
        if(number == 1999){
            printf("Correct\n" );
            return 0;
        }else{
            printf("Wrong\n" );
        }

    }

    return 0;
}
