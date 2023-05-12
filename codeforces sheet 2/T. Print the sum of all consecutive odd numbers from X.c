#include<stdio.h>
int main()
{
    int no;
    scanf("%d",&no);
    while(no--){
        int x,y,i,sum=0;
        scanf("%d%d",&x,&y);
        if(x%2==0){
           x++;
          for(i=1;i<=y;i++) {
            sum+=x+2;
            }
        }
        else
        {
          for(i=1;i<=y;i++) {
            sum+=x+1;
        }
        }
    printf("%d\n",sum);
    }
   return 0;
}
