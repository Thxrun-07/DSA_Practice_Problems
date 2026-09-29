#include <stdio.h>

int comp[200005];
int vis[200005];
int adj[200005][2], adjn[200005];

int n, m, cn;
int u[200005], v[200005];
int radj[200005][2], radjn[200005];

void dfs(int s, int id) {
  int stack[200005], sp = 0;
  stack[sp++] = s; comp[s] = id;
  while (sp) {
    int x = stack[--sp];
    for (int i = 0; i < adjn[x]; i++) {
       int y = adj[x][i];
       if (comp[y] != id) { comp[y] = id; stack[sp++] = y; }
    }
  }
}

int main(void) {
  scanf("%d %d", &n, &m);
  for (int i = 0; i < m; i++) {
    scanf("%d %d", &u[i], &v[i]);
    adj[u[i]][adjn[u[i]]++] = v[i];
    radj[v[i]][radjn[v[i]]++] = u[i];
  }

  cn = 0;
  for (int i = 1; i <= n; i++) comp[i] = 0;

  int cid[200005] = {0};
  int nc = 0;
  for (int s = 1; s <= n; s++) {
    if (cid[s]) continue;

    for (int i = 1; i <= n; i++) vis[i] = 0;
    int stack[200005], sp = 0;
    stack[sp++] = s; vis[s] = 1;
    while (sp) { int x = stack[--sp]; for (int i = 0; i < adjn[x]; i++) { int y = adj[x][i]; if (!vis[y]) { vis[y] = 1; stack[sp++] = y; } } }
    int reachf[200005];
    for (int i = 1; i <= n; i++) reachf[i] = vis[i];
    for (int i = 1; i <= n; i++) vis[i] = 0;
    sp = 0; stack[sp++] = s; vis[s] = 1;
    while (sp) { int x = stack[--sp]; for (int i = 0; i < radjn[x]; i++) { int y = radj[x][i]; if (!vis[y]) { vis[y] = 1; stack[sp++] = y; } } }
    nc++;
    for (int i = 1; i <= n; i++) if (reachf[i] && vis[i] && !cid[i]) cid[i] = nc;
  }
  int ins[200005] = {0}, outs[200005] = {0};
  for (int i = 0; i < m; i++) if (cid[u[i]] != cid[v[i]]) { outs[cid[u[i]]] = 1; ins[cid[v[i]]] = 1; }
  int src[200005], sn = 0, snk[200005], kn = 0;
  for (int c = 1; c <= nc; c++) { if (!ins[c]) src[sn++] = c; if (!outs[c]) snk[kn++] = c; }
  if (nc == 1) { printf("0\n"); return 0; }
  int k = sn > kn ? sn : kn;
  printf("%d\n", k);
  for (int i = 0; i < k; i++) {
    int a = snk[i % kn], b = src[i % sn];

    int va = -1, vb = -1;
    for (int x = 1; x <= n; x++) { if (cid[x] == a && va < 0) va = x; if (cid[x] == b && vb < 0) vb = x; }
    printf("%d %d\n", va, vb);
  }
  return 0;
}
