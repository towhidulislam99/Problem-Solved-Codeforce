#include <stdio.h>
#include <math.h>
#define PI acos(-1)
    int main()
        {
        int test,i,r1,r2,height,pjuice;
        double R,R2,Volume;
        scanf("%d",&test);

        for(i =0; i<test; i++) {
                scanf("%d%d%d%d",&r1,&r2,&height,&pjuice);
                R = r2+ (r1-r2)*((double)(pjuice)/height);
                Volume = ((PI*pjuice)*(R*R+R*r2+r2*r2))/3.0;
                printf("Case %d: %.9lf\n",i+1,Volume);


                }
        return 0;
        }
