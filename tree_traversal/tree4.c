#include <stdio.h>
#include <stdlib.h>

typedef struct { int a, b, c; } Edge;
int par[5005];
int find(int x) { while (par[x] != x) x = par[x] = par[par[x]]; return x; }
int cmp(const void *p, const void *q) { return ((const Edge *)q)->c - ((const Edge *)p)->c; }

int printheap(int N) { (void)N; return 0; }

int main(void) {
  int T;
  if (scanf("%d", &T) != 1) return 0;
  while (T--) {
    int N, M;
    scanf("%d %d", &N, &M);
    static Edge e[100005];
    for (int i = 0; i < M; i++) scanf("%d %d %d", &e[i].a, &e[i].b, &e[i].c);
    qsort(e, M, sizeof(Edge), cmp);
    for (int i = 1; i <= N; i++) par[i] = i;
    long long total = 0; int taken = 0;
    for (int i = 0; i < M && taken < N - 1; i++) {
       int ra = find(e[i].a), rb = find(e[i].b);
       if (ra != rb) { par[ra] = rb; total += e[i].c; taken++; }
    }
    printf("%lld\n", total);
  }
  return 0;
}
