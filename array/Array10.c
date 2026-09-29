#include <stdio.h>
#include <stdlib.h>

#define MAXN 105

int s[MAXN];
int cp[MAXN];

#define read(x) scanf("%d", &(x))

static int cmp(const void *a, const void *b) { return *(const int *)a - *(const int *)b; }

static int rank_of(int v, int n) {
  int lo = 0, hi = n - 1;
  while (lo < hi) { int mid = (lo + hi) / 2; if (cp[mid] < v) lo = mid + 1; else hi = mid; }
  return lo + 1;
}

void sol() {
  int n;
  read(n);
  int i;
  for (i = 0; i < n; i++) read(s[i]);
  for (i = 0; i < n; i++) cp[i] = s[i];
  qsort(cp, n, sizeof(int), cmp);
  int u = 0;
  for (i = 0; i < n; i++) if (i == 0 || cp[i] != cp[i - 1]) cp[u++] = cp[i];
  long long total = 0;
  for (i = 0; i < n; i++) total += rank_of(s[i], u);
  printf("%lld\n", total);
}

int main(void) {
  int T;
  read(T);
  while (T--) sol();
  return 0;
}
