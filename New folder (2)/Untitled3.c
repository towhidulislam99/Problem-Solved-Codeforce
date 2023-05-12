#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    while(n--){
        scanf("%d",&a[n]);
        if(a[n]%2==0){
            printf("%d ",a[n]);
        }

    }
    return 0;
}
