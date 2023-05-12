#include <stdio.h>
int main()
{
  int n, i, c = 0;
  scanf("%d", &n);
 for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }

  if (c == 2) {
  printf("YES\n");
  }
  else {
  printf("NO\n");
  }
  return 0;
}
