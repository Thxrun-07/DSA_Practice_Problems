#include <stdio.h>

int main(void) {
  int T;
  if (scanf("%d", &T) != 1) return 0;
  while (T--) {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) break;
    int C[m][n];
    int i, j;
    for(i=0;i<n;i++)
       for(j=0;j<m;j++)
         scanf("%d", &C[j][i]);
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    long long sum = 0;
    for (i = x1; i <= x2; i++)
       for (j = y1; j <= y2; j++)
         sum += C[j - 1][i - 1];
    printf("%lld\n", sum);
  }
  return 0;
}
