#include<stdio.h>
int main()
{
    int n,m,i,mile=0,mile1=0,juice=0,juice1=0,total1,total2,sub,count=0;
    scanf("%d",&n);
    while(n)
    { int tc=1;
        scanf("%d",&m);
        int a[m];
        for(i=1;i<=m;i++){
            scanf("%d",&a[i]);
           if(a[i]<29){
           sub=a[i]-29
           }
          if(a[i]<29 && a[i]>60){
            mile1 = 20;
           }
           if(a[i]>60){
            juice = 15;
           }
           if(a[i]<59 && a[i]>120){
            juice1 = 30;
           }
          total1 = mile + mile1;
          total2 = juice + juice1;
        }
        if(total1>total2){
            printf("Case %d: Juice %d\n",tc,total2);
        }
        else if(total1<total2){
            printf("Case %d: Mile %d\n",tc,total1);
        }
        else if(total1==total2){
            printf("Case %d: Mile Juice %d\n",tc,total1);
        }
        tc+=1;
    }
    return 0;
}
