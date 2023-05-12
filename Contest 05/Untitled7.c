
#include<stdio.h>
int main()
{
    int a[8],i,f=0,j;
    for(j=0;j<8;j++){
    scanf("%d",&a[j]);
    }
    for(j=0;j<8;j++)
    {
     for(i=1;i<a[j];i++){
        if(a[j]%i==0)
            f=f+i;
     }

     printf("PERFECTION OUTPUT\n");
     if(f==a[j]){
        printf("%d  PERFECT\n",a[j]);
     }
     else if(f<a[j]){
        printf("%d  DEFICIENT\n",a[j]);
     }
     else if(f>a[j]){
        printf("%d   ABUNDANT\n",a[j]);
     }
     if(a[j]==0)
        printf("END OF OUTPUT");
    }


  return 0;
}
