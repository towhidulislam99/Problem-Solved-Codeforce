#include<stdio.h>
int main()
{
  	int n;
  	scanf("%d",&n);
  	while(n--){
        int m,i,j,max=0;
        scanf("%d",&m);
        int a[m];
        for(i=0;i<m;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<m-1;i++){
            for(j=1;j<m;j++){
              max = a[i] + a[j];
            }
             }
printf("%d",max);
  	}

    return 0;
}
