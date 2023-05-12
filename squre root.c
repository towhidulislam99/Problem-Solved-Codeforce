#include<stdio.h>
#include<math.h>
int main()
{
   long long int num,i;
   int FLAG=1;
   scanf("%lld",&num);
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
      printf("YES");
   }
   else
   {
      printf("NO");
   }
   return 0;
}
