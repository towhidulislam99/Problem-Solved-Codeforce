#include <stdio.h>
#include <math.h>
#define PI 2*acos(0.0)
int main()
{
    int input,i;
    double area,r;
    scanf("%d", &input);
    for(i=1; i<=input; i++)
    {
        scanf("%lf", &r);
        area=((r+r)*(r+r))-(PI*r*r);
        printf("Case %d: %.2lf\n",i,area);
    }
    return 0;
}
