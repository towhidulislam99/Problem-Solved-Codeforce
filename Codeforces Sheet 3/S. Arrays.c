#include<stdio.h>
int main()
{
    int m,n,x,i,j;
    scanf("%d%d",&n,&m);
    int a[m][n];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
       scanf("%d",&x);
      if(x =a[i][j]){
            printf("will not take number");
      }
   else if(x!=a[i][j]){
            printf("will take number");
   }

     return 0;
}
