#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
        if(ch>='A' && ch<='Z')
			ch=ch+32;
		else if(ch>='a' && ch<='z')
			ch=ch-32;
		else
			;

		printf("%c",ch);
    }
    return 0;
 }
