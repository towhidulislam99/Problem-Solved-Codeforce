#include<stdio.h>
int main()
{
    int x,y;
    float price;
    scanf("%d%d",&x,&y);
    if (x==1)
    {
     price = y*4.00;
     printf("Total: R %.2f",price);
    }
    else if (x==2)
    {
     price = y*4.50;
     printf("Total: R %.2f",price);
    }
    else if (x==3)
    {
     price = y*5.00;
     printf("Total: R %.2f",price);
    }
    else if (x==4)
    {
     price = y*2.00;
     printf("Total: R %.2f",price);
    }
    else if (x==5)
    {
     price = y*1.50;
     printf("Total: R %.2f",price);
    }
    return 0;
}

