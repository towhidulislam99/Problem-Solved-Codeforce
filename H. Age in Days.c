#include<stdio.h>
int main()
{
    int n,y,m,d;
    scanf("%d",&n);
    y=n/365;
    m=(n%365)/30;
    d= (n%365)%30;
    printf("%d years\n%d months\n%d days",y,m,d);
    return 0;
}
