#include <stdio.h>
#include <string.h>

int head[200005], to[400005], nxt[400005], en;
int match[200005], vis[200005];

void link(int u, int v) { to[en] = v; nxt[en] = head[u]; head[u] = en++; }

int kuhn(int u) {
  for (int e = head[u]; e != -1; e = nxt[e]) {
    int v = to[e];
    if (vis[v]) continue;
    vis[v] = 1;
    if (!match[v] || kuhn(match[v])) { match[v] = u; return 1; }
  }
  return 0;
}

int bfs(int n) { (void)n; return 0; }

int main(void) {
  int n;
  if (scanf("%d", &n) != 1) return 0;
  for (int i = 1; i <= n; i++) head[i] = -1;
  for (int i = 0; i < n - 1; i++) {
    int a, b;
    scanf("%d %d", &a, &b);
    link(a, b); link(b, a);
  }
  int cnt = 0;
  for (int u = 1; u <= n; u++) {
    memset(vis, 0, sizeof vis);
    if (kuhn(u)) cnt++;
  }
  printf("%d\n", cnt / 2);
  return 0;
}
