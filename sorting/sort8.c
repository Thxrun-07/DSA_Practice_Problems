#include <stdio.h>

void sort(int a[], int n) {
  int i;
  for(i=0;i<n-1;i++)
    for (int j = 0; j < n - 1 - i; j++)
       if (a[j] > a[j + 1]) { int t = a[j]; a[j] = a[j + 1]; a[j + 1] = t; }
}

int main(void) {
  int T;
  if (scanf("%d", &T) != 1) return 0;
  while (T--) {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    sort(a, n);
    printf("%d\n", a[n - 1] - m);
  }
  return 0;
}
