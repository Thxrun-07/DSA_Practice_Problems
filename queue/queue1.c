#include <stdio.h>

int main(void) {
  int n;
  if (scanf("%d", &n) != 1) return 0;
  long long a[n + 1];
  long long biggest = -1, big = -1, third = -1;
  for (int i = 1; i <= n; i++) {
    scanf("%lld", &a[i]);
    if(a[i]>biggest) { third = big; big = biggest; biggest = a[i]; }
    else if (a[i] > big) { third = big; big = a[i]; }
    else if (a[i] > third) { third = a[i]; }
    if (i < 3) printf("-1\n");
    else printf("%lld\n", biggest * big * third);
  }
  return 0;
}
