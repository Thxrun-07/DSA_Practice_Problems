#include <stdio.h>
#include <stdlib.h>

static int cmp(const void *a, const void *b) { long long x = *(const long long *)a, y = *(const long long *)b; return (x > y) - (x < y); }

void insertionSort(long int *p, long int n) {
  for (long int i = 1; i < n; i++) {
    long int k = p[i], j = i - 1;
    while (j >= 0 && p[j] > k) { p[j + 1] = p[j]; j--; }
    p[j + 1] = k;
  }
}

int main(void) {
  int q;
  if (scanf("%d", &q) != 1) return 0;
  while(q--) {
    int n;
    scanf("%d", &n);
    long long a[105][105];
    long long rs[105], cs[105];
    for (int i = 0; i < n; i++) { rs[i] = 0; cs[i] = 0; }
    for (int i = 0; i < n; i++)
       for (int j = 0; j < n; j++) {
         scanf("%lld", &a[i][j]);
         rs[i] += a[i][j]; cs[j] += a[i][j];
       }
    insertionSort((long int *)rs, n);
    insertionSort((long int *)cs, n);
    int ok = 1;
    for (int i = 0; i < n; i++) if (rs[i] != cs[i]) ok = 0;
    printf("%s\n", ok ? "Possible" : "Impossible");
  }
  return 0;
}
