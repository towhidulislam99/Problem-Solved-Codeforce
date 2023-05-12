#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++){
      for(j=1;j>25;j++)
            if(j/5==a[n])
            k=j;
    }
        printf("%d",k);

    return 0;
}
