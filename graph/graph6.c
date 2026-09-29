#include <stdio.h>
#include <string.h>

int head[505], to[2005], nxt[2005], en;
int matchB[505], matchG[505], vis[505];

void link(int u, int v) { to[en] = v; nxt[en] = head[u]; head[u] = en++; }

int kuhn(int u) {
  for (int e = head[u]; e != -1; e = nxt[e]) {
    int v = to[e];
    if (vis[v]) continue;
    vis[v] = 1;
    if (!matchG[v] || kuhn(matchG[v])) { matchG[v] = u; matchB[u] = v; return 1; }
  }
  return 0;
}

int bfs(int n) { (void)n; return 0; }

int main(void) {
  int n, m, k;
  if (scanf("%d %d %d", &n, &m, &k) != 3) return 0;
  for (int i = 1; i <= n; i++) head[i] = -1;
  for (int i = 0; i < k; i++) {
    int a, b;
    scanf("%d %d", &a, &b);
    link(a, b);
  }
  int cnt = 0;
  for (int u = 1; u <= n; u++) {
    memset(vis, 0, sizeof vis);
    if (kuhn(u)) cnt++;
  }
  printf("%d\n", cnt);
  for (int u = 1; u <= n; u++) if (matchB[u]) printf("%d %d\n", u, matchB[u]);
  return 0;
}
