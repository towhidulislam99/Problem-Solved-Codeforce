#include<stdio.h>
#include<math.h>
int main()
{
    long long int testcase,row,col,input,i,root,diff;
    scanf("%lld",&testcase);
    for(i=1;i<=testcase;i++){
        scanf("%lld",&input);
        root = sqrt(input);
        diff = input - root*root;
        if(diff==0){
            if(root%2==0){
                row = 1;
                col = root;
            }
            else
            {
                col = 1;
                row = root;
            }
        }
        else if(diff>root)
        {
          if(root%2==0){
            row=root+1;
            col=root+1 - (diff-root-1);
          }
          else {
            row=root+1 - (diff-root-1);
            col=root+1;
          }
        }
        else{
            if(root%2==0){
                row=input-root*root;
                col=root+1;
            }
            else{
                row=root+1;
                col=input-root*root;
            }
        }
         printf ("Case %lld: %lld %lld\n", i, col, row);
    }
   return 0;
}
