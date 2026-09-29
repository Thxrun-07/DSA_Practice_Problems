#include <stdio.h>

int cnt[1000006];
int bc = 0, best = 0;

int main(void) {
  int n, m;
  if (scanf("%d %d", &n, &m) != 2) return 0;
  int a[1000005];
  int i;
  for(i = 0;i<n;i++) scanf("%d", &a[i]);
  for (int d = 0; d < n; d++) {
    int x = a[d];
    cnt[x]++;
    if (cnt[x] > bc || (cnt[x] == bc && x > best)) { bc = cnt[x]; best = x; }
    printf("%d %d\n", best, bc);
  }
  return 0;
}
