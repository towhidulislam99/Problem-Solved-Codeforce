#include<stdio.h>
#include<math.h>
int main()
{
    long long int input,row, col,diff,mid,cs,i,root,high,low;
    scanf("%lld",&cs);
    for(i=1;i<=cs;i++){
        scanf("%lld",&input);
        root = sqrt(input);
        high=(root+1) * (root+1);
        low = (root*root)+1;
        mid = (high+low)/2;
        if(input>mid){
            row = root+1;
            col = root-1;
        }
            else{
                row = root-1;
                col = root+1;
                }
        printf("%lld%lld",row,col);
        }
    return 0;
}
