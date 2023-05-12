#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int n,m,s;
float a,b,v;
printf("Enter The value: ");
scanf("%d%d",&n,&m);
scanf("%f%f",&a,&b);
s=n+m;
printf("%d \t",s);
s=n-m;
printf("%d \n",s);
v=a+b;
printf("%1f \t",v);
v=a-b;
printf("%1f",v);

    return 0;
}

