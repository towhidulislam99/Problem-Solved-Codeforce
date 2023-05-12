#include<stdio.h>
int main(){
char* str[] = {"","one","two","three","four","five","six","seven","eight","nine"};
int a,b;
scanf("%d%d",&a,&b);
for(int i=a; i<=b; i++){
    if(i<=9){
        printf("%s\n",str[i]);
}
else{
    if(i%2==0){
        printf("even"\n);
    }
    else{
        printf("odd");
    }
}
}
return 0;
}
