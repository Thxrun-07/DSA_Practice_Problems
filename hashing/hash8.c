#include <stdio.h>

int A[1000006];

int main(void) {
  int n, q;
  if (scanf("%d %d", &n, &q) != 2) return 0;
  for (int i = 1; i <= n; i++) A[i] = 0;
  while(q--) {
    int t, x;
    scanf("%d %d", &t, &x);
    if (t == 1) A[x] = -1;
    else {
       int ans = -1;
       for (int i = x; i <= n; i++) if (A[i] == -1) { ans = i; break; }
       printf("%d\n", ans);
    }
  }
  return 0;
}
