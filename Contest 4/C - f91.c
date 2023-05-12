#include<stdio.h>
int main()
{
     int n,r=0;
    while(scanf("%d",&n) && n!=0)
        {
    if(n>100)
        r=n-10;
    else
        r=91;
        printf("f91(%d) = %d\n",n,r);
        }
    return 0;
        }


