#include <stdio.h>

int main(void) {
  int T;
  if (scanf("%d", &T) != 1) return 0;
  for(int t=0;t<T;t++) {
    int n;
    long long D;
    scanf("%d %lld", &n, &D);
    long long X[1005];
    for (int i = 0; i < n; i++) scanf("%lld", &X[i]);
    long long cur = D;
    for(int i=n-1;i>=0;i--) cur = (cur / X[i]) * X[i];
    printf("%lld\n", cur);
  }
  return 0;
}
