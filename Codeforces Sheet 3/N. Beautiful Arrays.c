#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100000], n, flag_0, flag_1, flag_neg1, flag_oth;
    int i, t;
    scanf("%d", &t);
    while(t--)
    {
        flag_0 = flag_neg1 = flag_1 = flag_oth = 0;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] == 0)
                ++flag_0;
            else if (a[i] == 1)
                ++flag_1;
            else if (a[i] == -1)
                ++flag_neg1;
            else
                ++flag_oth;
        }
        if (flag_oth > 1)
            printf("no\n");
        else
        {
            if (flag_oth && flag_neg1)
                printf("no\n");
            else if (flag_neg1 > 1 && flag_1 == 0)
                printf("no\n");
            else
                printf("yes\n");
        }
    }
    return 0;
}
