#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    string a[n];
    for(i=0;i<n;i++){
        scanf("%s",&a[i]);
    }
    for(i=0;i<n;i++){
            sum+=a[i];
    }
    printf("%d",sum);
}
	return 0;
}
