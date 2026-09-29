#include <stdio.h>
#include <string.h>

char s[200005];
int n;

int longest_run(void) {
  int best = 1, run = 1;
  for (int i = 1; i < n; i++) {
    run = (s[i] == s[i - 1]) ? run + 1 : 1;
    if (run > best) best = run;
  }
  return best;
}

int main(void) {
  int m;
  if (!scanf("%s", s)) return 0;
  n = strlen(s);
  if (scanf("%d", &m) != 1) return 0;
  for (int q = 0; q < m; q++) {
    int x; scanf("%d", &x);
    s[x - 1] = (s[x - 1] == '0') ? '1' : '0';
    printf("%s%d", q ? " " : "", longest_run());
  }
  printf("\n");
  return 0;
}
