#include <stdio.h>
int main()
{
	int testcase;
	scanf("%d", &testcase);
	int input,i;
	int total;

	for (i= 1;i<= testcase;i++) {
		scanf("%d", &input);
		total = 0;
		while(input) {
			total += input % 2;
			input = input / 2;
		}

		if(total%2) {
			printf("Case %d: odd\n",i);
		}

		else {
			printf("Case %d: even\n",i);

		}
	}
 return 0;
}
