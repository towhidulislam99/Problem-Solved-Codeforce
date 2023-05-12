#include<stdio.h>
#include<math.h>
int main()
{
   int n,i,j,temp=0;
   scanf("%d",&n);
   for(i=0;i<=n;++i)
    for(j=1;j<=n;++j)
        temp= i*j;
        printf("%d %d %d\n",i,j,temp);



    return 0;
}
