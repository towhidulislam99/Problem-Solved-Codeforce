#include<stdio.h>
#include<math.h>
int main()

{
    int in1,in2,total,i,d;

    while(scanf("%d %d", &in1, &in2)==2)

    {

        if(in1==0&&in2==0){
        break;
}
        d=0;

        for(i=in1;i<=in2;i++)
        {
           total=sqrt(i);
           if(total*total==i)
           d++;
        }

        printf("%d\n", d);
    }

return 0;

}
