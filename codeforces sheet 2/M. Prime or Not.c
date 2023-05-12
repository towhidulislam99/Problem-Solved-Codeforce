#include<stdio.h>
#include<math.h>
int main()
{
   int num,i,n;
   scanf("%d",&n);
   while(n--){
   int FLAG=1;
   scanf("%d",&num);
   for(i=2;i<=sqrt(num);i++)
   {
      if(num%i == 0)
      {
         FLAG = 0;
         break;
      }
   }
   if(FLAG == 1)
   {
      printf("Prime\n");
   }
   else
   {
      printf("Not\n");
   }
   }
   return 0;
}
