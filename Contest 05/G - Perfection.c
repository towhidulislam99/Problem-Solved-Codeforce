#include<stdio.h>
int main()
{
    int n,i,f,x=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        if(x!=1)
    printf("PERFECTION OUTPUT\n");
       x=1;
       f=0;
     for(i=1;i<n/2;i++){
        if(n%i==0)
            f=f+i;
     }
     if(f==n){
        printf("%d  PERFECT\n",n);
     }
     else if(f<n){
        printf("%d  DEFICIENT\n",n);
     }
     else if(f>n){
        printf("%d  ABUNDANT\n",n);
     }
    }
  printf("END OF OUTPUT");
  return 0;
}
