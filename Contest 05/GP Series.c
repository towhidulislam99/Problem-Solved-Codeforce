#include<stdio.h>
#include<math.h>
int main()
{
    float a,r,tn;
    int n;
    float sum=0;
    scanf("%f",&a);
    scanf("%d",&n);
    scanf("%f",&r);
    sum =(a*(1-pow(r,n+1)))/(1-r);
    tn = a * (1 -pow(r,n-1));
    printf("%f\n",tn);
    printf("%f\n",sum);
    return 0;
}
