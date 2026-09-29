#include <stdio.h>
#include <string.h>

int adj[400005][2], hadj[400005][2];
int comp[400005], assign[200005];
int nvar;

int idx(int lit) { return lit > 0 ? 2 * lit : 2 * (-lit) + 1; }
int neg(int lit) { return -lit; }

int main(void) {
  int n, m;
  if (scanf("%d %d", &n, &m) != 2) return 0;
  nvar = m;
  int a[100005], b[100005];
  char sa, sb;
  int na = 0, nb = 0;

  static int to[800005], nxt[800005], head[400005], hn = 0;
  for (int i = 0; i < 400005; i++) head[i] = -1;
  for (int i = 0; i < n; i++) {
    int x, y;
    scanf(" %c %d %c %d", &sa, &x, &sb, &y);
    int l1 = (sa == '+') ? x : -x;
    int l2 = (sb == '+') ? y : -y;
    a[i] = l1; b[i] = l2;

    to[hn] = idx(l2); nxt[hn] = head[idx(neg(l1))]; head[idx(neg(l1))] = hn++;
    to[hn] = idx(l1); nxt[hn] = head[idx(neg(l2))]; head[idx(neg(l2))] = hn++;
  }

  static int order[400005], on = 0, vis2[400005];
  for (int s = 2; s <= 2 * nvar + 1; s++) {
    if (vis2[s]) continue;
    int stack[400005], sp = 0, ese[400005];
    stack[sp++] = s; vis2[s] = 1; ese[0] = 0;

    static int ep[400005];
    ep[s] = head[s];
    while (sp) {
       int x = stack[sp - 1];
       int e = ep[x];
       int pushed = 0;
       while (e != -1) {
         int y = to[e];
         ep[x] = nxt[e];
         if (!vis2[y]) { vis2[y] = 1; ep[y] = head[y]; stack[sp++] = y; pushed = 1; break; }
         e = nxt[e];
       }
       if (!pushed) { order[on++] = x; sp--; }
    }
  }

  static int rto[800005], rnxt[800005], rhead[400005], rn = 0;
  for (int i = 0; i < 400005; i++) rhead[i] = -1;
  for (int x = 2; x <= 2 * nvar + 1; x++)
    for (int e = head[x]; e != -1; e = nxt[e]) {
       rto[rn] = x; rnxt[rn] = rhead[to[e]]; rhead[to[e]] = rn++;
    }
  int cid = 0;
  memset(comp, 0, sizeof comp);
  for (int i = on - 1; i >= 0; i--) {
    int s = order[i];
    if (comp[s]) continue;
    cid++;
    int stack[400005], sp = 0;
    stack[sp++] = s; comp[s] = cid;
    while (sp) {
       int x = stack[--sp];
       for (int e = rhead[x]; e != -1; e = rnxt[e]) {
         int y = rto[e];
         if (!comp[y]) { comp[y] = cid; stack[sp++] = y; }
       }
    }
  }
  for (int v = 1; v <= nvar; v++) {
    if (comp[idx(v)] == comp[idx(-v)]) { printf("IMPOSSIBLE\n"); return 0; }
    assign[v] = comp[idx(v)] > comp[idx(-v)];
  }
  for (int v = 1; v <= nvar; v++) printf("%s%c", v > 1 ? " " : "", assign[v] ? '+' : '-');
  printf("\n");
  return 0;
}
