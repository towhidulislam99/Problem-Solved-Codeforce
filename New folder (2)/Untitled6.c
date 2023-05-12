#include<stdio.h>
int main()
{
int n,i,sum=0;
scanf("%d",&n);
int val[n];
for(i=0;i<n;i++){
    scanf("%d",&val[i]);
    if(val[i]%2!=0){
        sum+=val[i];
       }
     if(val[i]==0){
            sum-=val[i-1];
        }
    }
    printf("%d ", sum);
    return 0;
}

