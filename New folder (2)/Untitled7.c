#include<stdio.h>
int main()
{
    int x,y,i,j,sum1=0,sum2=0;
    scanf("%d %d",&x,&y);
    int a[x][y];
    for(i=0;i<x;i++){
        for(j=0;j<y;j++)
        scanf("%d",&a[i][j]);
    }
     for(i=0;i<x;i++){
        for(j=0;j<y;j++){
    if(i==0){
        sum1+=a[i][j];
    }
   if(j==0){
    sum2+=a[i][j];
   }
     }
     }
   printf("%d %d",sum1 ,sum2);
    return 0;
}
