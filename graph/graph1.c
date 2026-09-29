#include <stdio.h>

int cost[25], req[105][25], rc[105], uu[105], vv[105];
int par[105];
int find(int x) { while (par[x] != x) x = par[x] = par[par[x]]; return x; }

int main(void) {
  int n, m, k;
  if (scanf("%d %d %d", &n, &m, &k) != 3) return 0;
  for (int i = 1; i <= k; i++) scanf("%d", &cost[i]);
  for (int i = 0; i < m; i++) {
    scanf("%d %d %d", &uu[i], &vv[i], &rc[i]);
    for (int j = 0; j < rc[i]; j++) scanf("%d", &req[i][j]);
  }
  long long best = -1;
  for (int mask = 1; mask < (1 << k); mask++) {
    for (int i = 0; i <= n; i++) par[i] = i;
    int comps = n;
    for (int i = 0; i < m; i++) {
       int ok = 1;
       for (int j = 0; j < rc[i]; j++) if (!(mask & (1 << (req[i][j] - 1)))) ok = 0;
       if (ok) {
         int a = find(uu[i]), b = find(vv[i]);
         if (a != b) { par[a] = b; comps--; }
       }
    }
    if (comps == 1) {
       long long c = 0;
       for (int t = 0; t < k; t++) if (mask & (1 << t)) c += cost[t + 1];
       if (best < 0 || c < best) best = c;
    }
  }
  printf("%lld\n", best);
  return 0;
}
