#include<stdio.h>
int main()
{
    int n,i,k=0,j=1;
    while(scanf("%d",&n)==1)
    {
       for(i=100000000;i>=1;i--) {
        if(i/5==n)
        k=i;
        if(k>30)
            k++;
       }
       if(k==25 || k==55)
       printf("Case %d: imposible\n",j);
       else
       printf("Case %d: %d\n",j++,k);
       j+1;
    }


    return 0;
}
