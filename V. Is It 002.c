#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,r,c;
    char ch[]="'+','-','*','='";
    scanf("%d%c%d%d",&a,&ch,b,r);
    if(a + b == r )
    {
        printf("Yes");
    }
    else if(a * b == r)
    {
        printf("Yes");
    }
    else if(a - b == r)
    {
        printf("Yes");
    }
    else if(a+b!=r)
    {
        c=a+b;
        printf("%d\n",c);
    }
    else if(a-b!=r)
    {
        c=a-b;
        printf("%d\n",c);
    }
    else if(a*b!=r)
    {
        c=a*b;
        printf("%d\n",c);
    }
    return 0;
}
