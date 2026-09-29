#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int head[2][2005], to[2][4005], nxt[2][4005], en[2];
char buf[2][2005][24];
int bn[2];

void add(int t, int u, int v) { to[t][en[t]] = v; nxt[t][en[t]] = head[t][u]; head[t][u] = en[t]++; }

int cmpstr(const void *a, const void *b) { return strcmp((const char *)a, (const char *)b); }

void canon(int t, int u, int parent, char *out) {
  char tmp[2005][24];
  int k = 0;
  for (int e = head[t][u]; e != -1; e = nxt[t][e]) {
    int v = to[t][e];
    if (v != parent) canon(t, v, u, tmp[k++]);
  }
  qsort(tmp, k, 24, cmpstr);
  char *p = out;
  *p++ = '(';
  for (int i = 0; i < k; i++) { int L = strlen(tmp[i]); memcpy(p, tmp[i], L); p += L; }
  *p++ = ')';
  *p = '\0';
}

int main(void) {
  int t;
  if (scanf("%d", &t) != 1) return 0;
  while(t--) {
    int n;
    scanf("%d", &n);
    for (int g = 0; g < 2; g++) {
       for (int i = 1; i <= n; i++) head[g][i] = -1;
       en[g] = 0;
       for (int i = 0; i < n - 1; i++) {
         int u, v;
         scanf("%d %d", &u, &v);
         add(g, u, v); add(g, v, u);
       }
    }
    char c1[2005], c2[2005];
    canon(0, 1, 0, c1);
    canon(1, 1, 0, c2);
    printf("%s\n", strcmp(c1, c2) == 0 ? "YES" : "NO");
  }
  return 0;
}
