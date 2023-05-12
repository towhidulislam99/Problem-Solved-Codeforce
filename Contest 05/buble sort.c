#include<stdio.h>
int main()
{
    int n,i,j,temp;
    int in1,start=0,end=n-1,mid;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    scanf("%d",&in1);

    mid = (start+end)/2;
    while(start<=end){
    if(a[mid]<in1){
       start = mid+1;
    }
    else if(a[mid]==in1){
        printf("%d found at location: %d\n",in1,mid+1);
        break;
    }
    else{
        end = mid-1;
        mid = (start+end)/2;
    }
    }
    if(start>end)
        printf("%d Not found: %d\n",in1);
    return 0;
}
