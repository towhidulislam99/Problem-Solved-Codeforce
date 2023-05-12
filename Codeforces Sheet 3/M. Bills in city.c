#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,max,min,value,diff;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++){
      if(max<=a[i]){
        max=a[i];
      }
      else if(a[i]<=min){
        min=a[i];
      }
     }
     diff=max-min;
     value=abs(diff);
    printf("%d\n",value);

return 0;
}
