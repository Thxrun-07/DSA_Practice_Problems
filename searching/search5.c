#include <stdio.h>

int main(void) {
  int T;
  if (scanf("%d", &T) != 1) return 0;
  for (int k = 1; k <= T; ++k) {
    int M;
    char s[105];
    scanf("%d %s", &M, s);
    int v[105];
    for (int i = 0; i < M; i++) v[i] = s[i] - '0';
    int w = (M + 1) / 2, best = 0;
    for (int i = 0; i + w <= M; i++) {
       int sum = 0;
       for (int j = i; j < i + w; j++) sum += v[j];
       if (sum > best) best = sum;
    }
    printf("%d\n", best);
  }
  return 0;
}
