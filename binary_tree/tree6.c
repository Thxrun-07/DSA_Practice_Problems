#include <stdio.h>

int boss[100005];

void link(int i, int j) { boss[i] = j; }

int main(void) {
  int n, q;
  if (scanf("%d %d", &n, &q) != 2) return 0;
  for (int i = 2; i <= n; i++) { int b; scanf("%d", &b); link(i, b); }
  while (q--) {
    int a, b;
    scanf("%d %d", &a, &b);
    int x = a;
    while (b > 0 && x >= 2) { x = boss[x]; b--; }
    if (b == 0) printf("%d\n", x);
    else printf("-1\n");
  }
  return 0;
}
