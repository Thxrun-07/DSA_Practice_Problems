#include <stdio.h>

long long a[200005];

int main(void) {
  int n, q;
  if (scanf("%d %d", &n, &q) != 2) return 0;
  for (int i = 1; i <= n; i++) scanf("%lld", &a[i]);
  while (q--) {
    int t, x, y;
    scanf("%d %d %d", &t, &x, &y);
    if (t == 1) {
       long long add = 1;
       for (int i = x; i <= y && i <= n; i++, add++) a[i] += add;
    } else {
       long long s = 0;
       for (int i = x; i <= y; i++) s += a[i];
       printf("%lld\n", s);
    }
  }
  return 0;
}
