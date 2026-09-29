#include <stdio.h>

long long cnt[1005];

int main(void) {
  int N, M;
  if (scanf("%d %d", &N, &M) != 2) return 0;
  for (int i = 0; i < N; i++) {
    long long v;
    scanf("%lld", &v);
    cnt[((v % M) + M) % M]++;
  }
  long long ans = 0;
  int i = 0, k;
  while(i<M) {
    for (int j = i; j < M; j++)
       for (k = j; k < M; k++) {
         if ((i + j + k) % M) continue;
         if (i == j && j == k) ans += cnt[i] * (cnt[i] - 1) * (cnt[i] - 2) / 6;
         else if (i == j) ans += cnt[i] * (cnt[i] - 1) / 2 * cnt[k];
         else if (j == k) ans += cnt[i] * cnt[j] * (cnt[j] - 1) / 2;
         else ans += cnt[i] * cnt[j] * cnt[k];
       }
    i++;
  }
  printf("%lld\n", ans);
  return 0;
}
