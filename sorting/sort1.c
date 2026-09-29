#include <stdio.h>
#include <stdlib.h>

static int cmpasc(const void *a, const void *b) { return *(const int *)a - *(const int *)b; }
static int cmpdesc(const void *a, const void *b) { return *(const int *)b - *(const int *)a; }

int main(void) {
  int T;
  if (scanf("%d", &T) != 1) return 0;
  while (T--) {
    int n;
    scanf("%d", &n);
    int g[n], b[n];
    for(int i = 0;i<n;i++) scanf("%d", &g[i]);
    for(int i = 0;i<n;i++) scanf("%d", &b[i]);
    qsort(g, n, sizeof(int), cmpasc);
    qsort(b, n, sizeof(int), cmpdesc);
    int cnt = 0;
    for (int i = 0; i < n; i++)
       if (g[i] % b[i] == 0 || b[i] % g[i] == 0) cnt++;
    printf("%d\n", cnt);
  }
  return 0;
}
