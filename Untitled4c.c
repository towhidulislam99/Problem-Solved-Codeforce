
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
int a, b;
scanf("%d\n%d", &a, &b);
// Complete the code.
char str[][100]={"zero","one","two","three","four","five","six","seven","eight","nine"};
for(int i=a;i<=b;i++){
if(i<=9){
printf("%s\n",str[i]);
}
else
{
if(i%2==0){
printf("even\n");
}
else
printf("odd\n");
}
}
return 0;
}
