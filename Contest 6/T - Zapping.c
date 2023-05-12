#include<stdio.h>
int main()
{
    int m,n,sub,sub1;
    while(scanf("%d%d",&n,&m)!= EOF)
    {
     if(n==-1 && m==-1)
        break;
        if(n>m){
      sub=n-m;
      sub1=100- n+m;
        }
     else
     {
        sub = m-n;
        sub1=100- m+n;
     }

    if(sub<sub1){
     printf("%d\n",sub);
    }
    else
        printf("%d\n",sub1);
    }
    return 0;
}
