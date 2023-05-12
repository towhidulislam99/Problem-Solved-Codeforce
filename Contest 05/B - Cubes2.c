#include<stdio.h>
int main()
{
    int n,i,j,k,l,m;
    scanf("%d",&n);
    while(1){
    if(n==0){
    break;
    }
    for(i=1;i<n;i++){
        k=i*i*i;
        for(j=1;j<n;j++)
            l=j*j*j;
    }
    if(k+l==n)
    printf("%d %d",k,l);
    else
        printf("No soluation");
    }
    return 0;

}
