#include <stdio.h>
#include <string.h>

int main(void) {
  char s[1005];
  if (!fgets(s, sizeof s, stdin)) return 0;
  int l = strlen(s);
  if (l && s[l-1] == '\n') s[--l] = '\0';
  int cnt[256] = {0};
  int i;
  for(i=0;i<l;i++) cnt[(unsigned char)s[i]]++;
  int bestc = -1;
  for (int c = 0; c < 256; c++)
    if (cnt[c] > 0 && (bestc < 0 || cnt[c] > cnt[bestc])) bestc = c;
  printf("%c %d\n", bestc, cnt[bestc]);
  return 0;
}
