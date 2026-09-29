#include <stdio.h>

char g[105][105];
int pre[105][105];

int main(void) {
  int n, q;
  if (scanf("%d %d", &n, &q) != 2) return 0;
  int m = 0;
  for (int i = 1; i <= n; i++) {
    scanf("%s", g[i] + 1);
  }
  for (int j = 1; g[1][j]; j++) m = j;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
       pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + (g[i][j] == '*');
  while (q--) {
    int r1, c1, r2, c2;
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    if (r1 > r2 || c1 > c2) { printf("0\n"); continue; }
    printf("%d\n", pre[r2][c2] - pre[r1 - 1][c2] - pre[r2][c1 - 1] + pre[r1 - 1][c1 - 1]);
  }
  return 0;
}
