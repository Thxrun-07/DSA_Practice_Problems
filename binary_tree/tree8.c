#include <stdio.h>
#include <stdlib.h>

int p[200005];
int n;

int compare(const void *a, const void *b) { return *(const int *)a - *(const int *)b; }

int bit[200005];
void update(int i, int n, int x) { (void)n; (void)x; p[i] = x; }

int main(void) {
  int q;
  if (scanf("%d %d", &n, &q) != 2) return 0;
  for (int i = 1; i <= n; i++) scanf("%d", &p[i]);
  while (q--) {
    char op;
    scanf(" %c", &op);
    if (op == '!') {
       int k, x;
       scanf("%d %d", &k, &x);
       update(k, n, x);
    } else {
       int a, b;
       scanf("%d %d", &a, &b);
       int tmp[200005];
       for (int i = 1; i <= n; i++) tmp[i - 1] = p[i];
       qsort(tmp, n, sizeof(int), compare);
       int lo = 0, hi = n;
       while (lo < hi) { int m = (lo + hi) / 2; if (tmp[m] < a) lo = m + 1; else hi = m; }
       int l = lo;
       lo = 0; hi = n;
       while (lo < hi) { int m = (lo + hi) / 2; if (tmp[m] <= b) lo = m + 1; else hi = m; }
       printf("%d\n", lo - l);
    }
  }
  return 0;
}
