#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) { long long x = *(const long long *)a, y = *(const long long *)b; return (x > y) - (x < y); }

int main(void) {
  int n, q;
  if (scanf("%d %d", &n, &q) != 2) return 0;
  long long a[64];
  for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
  while (q--) {
    int k; scanf("%d", &k);
    long long b[64]; int m = n;
    for (int i = 0; i < n; i++) b[i] = a[i];
    for (int op = 0; op < k; op++) {
       qsort(b, m, sizeof(long long), cmp);
       long long d = b[m - 1] - b[0];
       int nm = 0;
       for (int i = 1; i < m - 1; i++) b[nm++] = b[i];
       b[nm++] = d;
       m = nm;
    }
    long long s = 0;
    for (int i = 0; i < m; i++) s += b[i];
    printf("%lld\n", s);
  }
  return 0;
}
