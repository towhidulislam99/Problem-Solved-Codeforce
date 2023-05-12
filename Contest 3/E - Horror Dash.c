#include <stdio.h>

int main() {
	int t, input, Case = 0;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &input);
		int max = 0, c;
		while(input--) {
			scanf("%d", &c);
			if(max < c)
				max = c;
		}
		printf("Case %d: %d\n", ++Case, max);
	}
    return 0;
}
