#include <stdio.h>
#include <math.h>

int main()
{
	int in1, in2, t;
	long long int a, b;

	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &in1, &in2);
		if(in2 > in1)
			printf("impossible\n");
		else {
			b = (in1 - in2)/2;
			a = in2 + b;
			if(a + b == in1 && abs(a - b) == in2)
				printf("%lld %lld\n", a, b);
			else
				printf("impossible\n");
		}
	}
	return 0;
}
