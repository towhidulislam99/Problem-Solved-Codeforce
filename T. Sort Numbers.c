#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a>=b)&&(a>=c))
    {
        if(b>=c)
        {
            printf("%d\n %d \n%d",c,b,a);
            printf("\n");
            printf("\n%d\n %d \n%d",a,b,c);
        }
        else
        {
           printf("%d\n %d\n %d",b,c,a);
           printf("\n");
           printf("\n%d\n%d\n %d",a,b,c);
        }
    }
    else if((b>=a)&&(b>=c))
    {
        if(a>=c)
        {
            printf("%d\n %d\n %d",c,a,b);
            printf("\n");
            printf("\n%d\n%d\n %d",a,b,c);
        }
        else
        {
            printf("%d\n %d\n %d",a,c,b);
            printf("\n");
            printf("\n%d\n%d\n %d",a,b,c);
        }
    }
    else if((c>=a)&&(c>=b))
    {
        if(a>=b)
        {
            printf("%d\n %d\n %d",b,a,c);
            printf("\n");
            printf("\n%d\n%d\n %d",a,b,c);
        }
        else
        {
            printf("%d\n %d\n %d",a,b,c);
            printf("\n");
            printf("\n%d\n%d\n %d",a,b,c);
        }
    }
}
