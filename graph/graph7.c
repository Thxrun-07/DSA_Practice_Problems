#include <stdio.h>

int par[200005], sz[200005];
int find(int x) { while (par[x] != x) x = par[x] = par[par[x]]; return x; }

int main(void) {
  int n, m;
  if (scanf("%d %d", &n, &m) != 2) return 0;
  for (int i = 1; i <= n; i++) { par[i] = i; sz[i] = 1; }
  int comps = n, mx = 1;
  while(m--) {
    int a, b;
    scanf("%d %d", &a, &b);
    int ra = find(a), rb = find(b);
    if (ra != rb) {
       if (sz[ra] < sz[rb]) { int t = ra; ra = rb; rb = t; }
       par[rb] = ra; sz[ra] += sz[rb];
       comps--;
       if (sz[ra] > mx) mx = sz[ra];
    }
    printf("%d %d\n", comps, mx);
  }
  return 0;
}
