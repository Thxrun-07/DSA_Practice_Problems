#include <stdio.h>
#include <stdlib.h>

static int cmp(const void *a, const void *b) { long long x = *(const long long *)a, y = *(const long long *)b; return (x > y) - (x < y); }

int main(void) {
  int N;
  if (scanf("%d", &N) != 1) return 0;
  int NA[N];
  for (int i = 0; i < N; i++) scanf("%d", &NA[i]);
  int cap = N * (N + 1) / 2;
  long long *vals = malloc(sizeof(long long) * cap);
  int vn = 0;
  for (int i = 0; i < N; i++) {
    long long cur = 0, best = -9e18;
    for (int j = i; j < N; j++) {
       cur = (cur > 0 ? cur : 0) + NA[j];
       if (cur > best) best = cur;
       vals[vn++] = best;
    }
  }
  qsort(vals, vn, sizeof(long long), cmp);
  long long sum = 0;
  for (int i = 0; i < vn; i++) if (i == 0 || vals[i] != vals[i - 1]) sum += vals[i];
  printf("%lld\n", sum);
  return 0;
}
