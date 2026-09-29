#include <stdio.h>

int par[200005];
int find(int x) { while (par[x] != x) x = par[x] = par[par[x]]; return x; }

int main(void) {
  int n, m;
  if (scanf("%d %d", &n, &m) != 2) return 0;
  for (int i = 1; i <= n; i++) par[i] = i;
  while(m--) {
    int a, b;
    scanf("%d %d", &a, &b);
    int ra = find(a), rb = find(b);
    if (ra != rb) par[ra] = rb;
  }
  int reps[200005], rn = 0;
  for (int i = 1; i <= n; i++) if (find(i) == i) reps[rn++] = i;
  printf("%d\n", rn - 1);
  for (int i = 1; i < rn; i++) printf("%d %d\n", reps[0], reps[i]);
  return 0;
}
