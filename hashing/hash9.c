#include <stdio.h>

long long dc[1000006];
long long cnt[200];

int main(void) {
  for (int i = 1; i <= 1000000; i++)
    for (int j = i; j <= 1000000; j += i) dc[j]++;
  int N;
  if (scanf("%d", &N) != 1) return 0;
  while(N--) {
    int v;
    scanf("%d", &v);
    cnt[dc[v]]++;
  }
  long long pairs = 0;
  for (int i = 0; i < 200; i++) pairs += cnt[i] * (cnt[i] - 1) / 2;
  printf("%lld\n", pairs);
  return 0;
}
