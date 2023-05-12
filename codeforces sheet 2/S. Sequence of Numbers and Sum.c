#include<stdio.h>
int main()
{
    int m,n,i,sum=0,input=3;
    while (input--){
    scanf("%d%d",&m,&n);

    if(m>n && m>0 && n>0 && m!=0){
    for(i=n;i<=m;i++){
    printf("%d ",i);
    sum=sum+i;}
    printf("sum =%d\n",sum);
}

   else if(m<n && m>0 && n>0 && m!=0){
    for(int i=m;i<=n;i++){
    printf("%d ",i);
    sum=sum+i;
    }
    printf("sum =%d\n",sum);
    }
    }
return 0;
}
