#include<stdio.h>
int main()
{
    int n,i,min=0,freq=0,ref;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
            }
            }
for(i=0;i<n;i++){
    if(a[i]==min){
        freq++;
    }
}
if(freq%2==0){
    printf("Unlucky");
}
else if(freq%2!=0){
    printf("Lucky");
}
return 0;
    }



