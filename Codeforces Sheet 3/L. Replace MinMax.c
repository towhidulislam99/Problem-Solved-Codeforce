#include<stdio.h>
int main()
{
    int n,i,k,max,min,maxindex=0,minindex=0,temp=0;
    scanf("%d",&n);
    int a[n];
    for(k=0;k<n;k++){
        scanf("%d",&a[k]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++){
      if(max<=a[i]){
        max=a[i];
        maxindex=i;
      }
      else if(a[i]<=min){
        min=a[i];
        minindex=i;
      }
     }
     temp=min;
     min=max;
     max=temp;
    printf("%d",maxindex);

return 0;
}
