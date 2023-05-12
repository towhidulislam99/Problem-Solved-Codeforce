#include<stdio.h>
int main()
{
    int n,i,j,a[10],count,u,d;
    printf("Lumberjacks:\n");
    while(scanf("%d",&n)==1)
    {
        while(n--){
       for(i=0;i<9;i++){
        scanf("%d",&a[i]);
       }
       u=a[0];
       d = a[1];
       if(u>d){
            count=0;
            for(i=0;i<9;i++){
                if(a[i]>a[i+1]){
                    count++;
                }
            }
       }
    else if(u<d){
        count =0;
        for(i=9;i<0;i++){
            if(a[i]<a[i+1]){
                count++;
            }
        }
       }


       if(count == 9)
        printf("Ordered\n");
       else
       printf("Unordered\n");
        }
    }
    return 0;
}
