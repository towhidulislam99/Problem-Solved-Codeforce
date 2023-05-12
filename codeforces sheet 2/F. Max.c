#include<stdio.h>
int main()
{
    int num,n,i,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&num);
        if(num>max){
        max = num;
        }
    }
    printf("%d\n",max);
    return 0;
    }
