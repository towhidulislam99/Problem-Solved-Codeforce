#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);


    if(ch >= 'A' && ch <= 'Z')
    {
        printf("IS CAPITAL");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("IS SMALL");
    }
    return 0;
}
