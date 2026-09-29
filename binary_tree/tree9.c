#include <stdio.h>

int p1[1005], p2[1005];
int f1(int x) { while (p1[x] != x) x = p1[x] = p1[p1[x]]; return x; }
int f2(int x) { while (p2[x] != x) x = p2[x] = p2[p2[x]]; return x; }

int main(void) {
  int n, m1, m2;
  if (scanf("%d %d %d", &n, &m1, &m2) != 3) return 0;
  for (int i = 1; i <= n; i++) { p1[i] = i; p2[i] = i; }
  while(m1--) { int u, v; scanf("%d %d", &u, &v); int a = f1(u), b = f1(v); if (a != b) p1[a] = b; }
  while (m2--) { int u, v; scanf("%d %d", &u, &v); int a = f2(u), b = f2(v); if (a != b) p2[a] = b; }
  int eu[1005], ev[1005], k = 0;
  for (int u = 1; u <= n; u++)
    for (int v = u + 1; v <= n; v++) {
       if (f1(u) != f1(v) && f2(u) != f2(v)) {
         p1[f1(u)] = f1(v);
         p2[f2(u)] = f2(v);
         eu[k] = u; ev[k] = v; k++;
       }
    }
  printf("%d\n", k);
  for (int i = 0; i < k; i++) printf("%d %d\n", eu[i], ev[i]);
  return 0;
}
