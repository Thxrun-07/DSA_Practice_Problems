#include <stdio.h>

char ch[100005];
int head[100005], to[200005], nxt[200005], en;
int cnt[100005][26];
int vis[100005];

void add(int u, int v) { to[en] = v; nxt[en] = head[u]; head[u] = en++; }

void dfs(int u) {
  vis[u] = 1;
  for (int c = 0; c < 26; c++) cnt[u][c] = 0;
  cnt[u][ch[u] - 'a'] = 1;
  for (int e = head[u]; e != -1; e = nxt[e]) {
    int v = to[e];
    if (!vis[v]) {
       dfs(v);
       for (int c = 0; c < 26; c++) cnt[u][c] += cnt[v][c];
    }
  }
}

int main(void) {
  int N, Q;
  if (scanf("%d %d", &N, &Q) != 2) return 0;
  scanf("%s", ch + 1);
  for (int i = 1; i <= N; i++) head[i] = -1;
  int i;
  for(i = 0;i<N-1;i ++) {
    int u, v;
    scanf("%d %d", &u, &v);
    add(u, v); add(v, u);
  }
  dfs(1);
  while(Q--) {
    int u; char c;
    scanf("%d %c", &u, &c);
    printf("%d\n", cnt[u][c - 'a']);
  }
  return 0;
}
