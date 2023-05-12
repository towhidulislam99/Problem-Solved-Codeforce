#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char ch, s[100],sen[100];
    scanf("%c %s %[^\n]%*c", &ch,&s,&sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    return 0;
}

