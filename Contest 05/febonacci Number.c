#include<stdio.h>
int main()
{
    int n,i;
long int arr[40];
scanf("%d",&n);
arr[0]=0;
arr[1]=1;
for(i=2;i<n;i++){
    arr[i]= arr[i-1]+arr[i-2];
}
printf("Febonaci Naumber is: ");
for(i=2;i<n;i++)
    printf("%ld ",arr[i]);
return 0;
}
