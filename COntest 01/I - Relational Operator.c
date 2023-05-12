#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
   while(n--)
         {
             long long int m,n;
             scanf("%lld %lld",&m,&n);
            if(m==n)
                printf("=\n");

            if(m>n)
                printf(">\n");

            if(m<n)
                printf("<\n");
             }
            return 0;
}
