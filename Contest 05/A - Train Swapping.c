#include<stdio.h>
int main()
{
    int n,m,i,j,k,temp;
     scanf("%d",&n);
     while(n)
    {
     scanf("%d",&m);
     int a[m];
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
     for(i=0;i<m;i++){
        for(j=i+1;j<m;j++)
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    for(i=0;i<m;i++)
        printf("%d\n",a[i]);
      n--;
    }
    return 0;
}
