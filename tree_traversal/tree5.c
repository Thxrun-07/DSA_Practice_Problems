#include <stdio.h>

int code[200005], deg[200005], used[200005];

int main(void) {
  int n;
  if (scanf("%d", &n) != 1) return 0;
  for (int i = 0; i < n - 2; i++) { scanf("%d", &code[i]); deg[code[i]]++; }
  for (int i = 1; i <= n; i++) deg[i] += 1;
  for (int i = 0; i < n - 2; i++) {
    int leaf = 1;
    while (used[leaf] || deg[leaf] > 1) leaf++;
    printf("%d %d\n", leaf, code[i]);
    used[leaf] = 1;
    deg[code[i]]--;
  }
  int a = -1, b = -1;
  for (int i = 1; i <= n; i++) if (!used[i]) { if (a < 0) a = i; else b = i; }
  printf("%d %d\n", a, b);
  return 0;
}
