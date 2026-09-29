#include <stdio.h>
#include <stdlib.h>

static int asc(const void *a, const void *b) { return *(const int *)a - *(const int *)b; }
static int desc(const void *a, const void *b) { return *(const int *)b - *(const int *)a; }

void sort(int a[], int n, int flag) {
  qsort(a, n, sizeof(int), flag ? asc : desc);
}

int main(void) {
  int T;
  if (scanf("%d", &T) != 1) return 0;
  while (T--) {
    int n;
    scanf("%d", &n);
    int A[n], B[n];
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    for (int i = 0; i < n; i++) scanf("%d", &B[i]);
    sort(A, n, 1);
    sort(B, n, 0);
    long long s = 0;
    for (int i = 0; i < n; i++) s += (long long)A[i] * B[i];
    printf("%lld\n", s);
  }
  return 0;
}
