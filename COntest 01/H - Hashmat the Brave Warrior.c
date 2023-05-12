#include<stdio.h>

int main()
{
    unsigned long int m,n;
    while((scanf("%lu %lu",&m,&n))==2)
    {
        if(m>n)
                printf("%lu\n",(m-n));
        else
                printf("%lu\n",(n-m));

    }
    return 0;
}

