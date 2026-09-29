#include <stdio.h>

int par[300005];
int xr[300005];

int find(int x) {
  if (par[x] == x) return x;
  int r = find(par[x]);
  xr[x] ^= xr[par[x]];
  par[x] = r;
  return r;
}

int main(void) {
  int n, q;
  if (scanf("%d %d", &n, &q) != 2) return 0;
  for (int i = 1; i <= n; i++) par[i] = i;
  while (q--) {
    int u, v, x;
    scanf("%d %d %d", &u, &v, &x);
    int ru = find(u), rv = find(v);
    if (ru != rv) { par[ru] = rv; xr[ru] = xr[u] ^ xr[v] ^ x; printf("YES\n"); }
    else printf("%s\n", ((xr[u] ^ xr[v]) == x) ? "YES" : "NO");
  }
  return 0;
}
