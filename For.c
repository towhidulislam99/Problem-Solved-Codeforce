#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {

    int a, b;

  scanf("%d%d",&a,&b);

    for (a >= 1; a <= 9; a++)
    {
    	switch (a)
    	{
    	    case 1:
            printf("one");
            break;

            case 2:
            printf("two");
            break;

            case 3:
            printf("three");
            break;

            case 4:
            printf("four");
            break;

            case 5:
            printf("five");
            break;

            case 6:
            printf("six");
            break;

            case 7:
            printf("seven");
            break;

            case 8:
            printf("eight");
            break;

            case 9:
            printf("nine");
            break;


    	}
    }

    if (a % 2 == 0)
    Printf("even\n");

    else
    Printf("odd");

	return 0;
}
