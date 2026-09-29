#include <stdio.h>

int max(int a, int b) { return a > b ? a : b; }

int main(void) {
  int T;
  if (scanf("%d", &T) != 1) return 0;
  while (T--) {
    int M, K, P;
    scanf("%d %d %d", &M, &K, &P);
    int pref[55][35] = {{0}};
    for (int i = 0; i < M; i++)
       for (int j = 1; j <= K; j++) {
         int v; scanf("%d", &v);
         pref[i][j] = pref[i][j - 1] + v;
       }
    int dp[2][1505];
    for (int p = 0; p <= P; p++) dp[0][p] = -1e9;
    dp[0][0] = 0;
    for (int i = 0; i < M; i++) {
       int cur = (i + 1) & 1, prv = i & 1;
       for (int p = 0; p <= P; p++) dp[cur][p] = -1e9;
       for (int p = 0; p <= P; p++) {
         if (dp[prv][p] < -1e8) continue;
         for (int t = 0; t <= K && p + t <= P; t++)
            dp[cur][p + t] = max(dp[cur][p + t], dp[prv][p] + pref[i][t]);
       }
    }
    printf("%d\n", dp[M & 1][P]);
  }
  return 0;
}
