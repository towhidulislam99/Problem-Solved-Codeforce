#include<stdio.h>
int main()
{
    int n=5,m,i,j,sum=0;
    scanf("%d",&n);
    while(n--){
         scanf("%d",&m);
         int a[m];
         for(i=0;i<m;i++){
            scanf("%d",&a[i]);
         }
         for(i=0;i<m;i++){
            for(j=0;j<m;j++){
             if(a[i]>=a[j]){
               sum=a[i];
             }
            }
            printf("%d\n",sum);
         }

    }
    return 0;
}
