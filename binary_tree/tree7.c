#include <stdio.h>

struct state { int deg; int depth; };
const int MAXL = 200005;
static struct state st_store[200005];
#define st st_store

int deg[2005], par[2005], depth[2005];
int adj[2005][2005], adjn[2005];

unsigned long long seen[1000005];
int nseen;

static unsigned long long hashseq(int *seq, int len) {
  unsigned long long h = 1469598103934665603ULL;
  for (int i = 0; i < len; i++) { h ^= (unsigned)seq[i]; h *= 1099511628211ULL; }
  return h;
}

int main(void) {
  int n;
  if (scanf("%d", &n) != 1) return 0;
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    scanf("%d %d", &u, &v);
    adj[u][adjn[u]++] = v;
    adj[v][adjn[v]++] = u;
    deg[u]++; deg[v]++;
  }

  int stack[2005], sp = 0;
  for (int i = 1; i <= n; i++) par[i] = -1;
  par[1] = 0; depth[1] = 0;
  stack[sp++] = 1;
  while (sp) {
    int u = stack[--sp];
    for (int i = 0; i < adjn[u]; i++) {
       int v = adj[u][i];
       if (par[v] == -1) { par[v] = u; depth[v] = depth[u] + 1; stack[sp++] = v; }
    }
  }
  int seq[2005];
  for (int a = 1; a <= n; a++) {
    int len = 0;
    for (int b = a; b >= 1; b = par[b]) {
       seq[len++] = deg[b];
       unsigned long long h = hashseq(seq, len) % 1000003ULL;
       while (seen[h] != 0 && seen[h] != hashseq(seq, len)) h = (h + 1) % 1000003ULL;
       if (seen[h] == 0) { seen[h] = hashseq(seq, len); nseen++; }
       if (b == 1) break;
    }
  }
  printf("%d\n", nseen);
  return 0;
}
