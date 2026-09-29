#include <stdio.h>
#include <string.h>

int to[4005], cap[4005], nxt[4005], head[1005], en;
int lvl[1005], itr[1005];

void add(int u, int v, int c) { to[en] = v; cap[en] = c; nxt[en] = head[u]; head[u] = en++; }

int bfs(int s, int t, int n) {
  memset(lvl, -1, sizeof(int) * (n + 1));
  int q[1005], qh = 0, qt = 0;
  lvl[s] = 0; q[qt++] = s;
  while (qh < qt) {
    int x = q[qh++];
    for (int e = head[x]; e != -1; e = nxt[e])
       if (cap[e] > 0 && lvl[to[e]] < 0) { lvl[to[e]] = lvl[x] + 1; q[qt++] = to[e]; }
  }
  return lvl[t] >= 0;
}

int dfs(int x, int t, int f) {
  if (x == t) return f;
  for (int *e = &itr[x]; *e != -1; e = &nxt[*e]) {
    int ee = *e;
    if (cap[ee] > 0 && lvl[to[ee]] == lvl[x] + 1) {
       int d = dfs(to[ee], t, f < cap[ee] ? f : cap[ee]);
       if (d > 0) { cap[ee] -= d; cap[ee ^ 1] += d; return d; }
    }
  }
  return 0;
}

int main(void) {
  int n, m;
  if (scanf("%d %d", &n, &m) != 2) return 0;
  for (int i = 1; i <= n; i++) head[i] = -1;
  int eu[2005], ev[2005];
  for (int i = 0; i < m; i++) {
    scanf("%d %d", &eu[i], &ev[i]);
    if (eu[i] == ev[i]) continue;
    add(eu[i], ev[i], 1);
    add(ev[i], eu[i], 0);
  }
  int flow = 0;
  while (bfs(1, n, n)) {
    for (int i = 1; i <= n; i++) itr[i] = head[i];
    int d;
    while ((d = dfs(1, n, 1)) > 0) flow += d;
  }
  printf("%d\n", flow);

  int used[2005] = {0};
  for (int p = 0; p < flow; p++) {
    int path[1005], pn = 0, x = 1;
    path[pn++] = 1;
    int vis[1005] = {0};
    vis[1] = 1;
    while (x != n) {
       int moved = 0;
       for (int e = head[x]; e != -1; e = nxt[e]) {
         if (e % 2 == 0 && !used[e / 2] && cap[e] == 0 && eu[e / 2] == x && !vis[to[e]]) {
            used[e / 2] = 1;
            x = to[e];
            vis[x] = 1;
            path[pn++] = x;
            moved = 1;
            break;
         }
       }
       if (!moved) break;
    }
    printf("%d\n", pn);
    for (int i = 0; i < pn; i++) printf("%s%d", i ? " " : "", path[i]);
    printf("\n");
  }
  return 0;
}
