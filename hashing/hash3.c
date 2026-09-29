#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct { char name[16]; long long top[3]; int cnt; } Fest;
Fest f[10005];
int nf;

Fest *get(const char *s) {
  for (int i = 0; i < nf; i++) if (strcmp(f[i].name, s) == 0) return &f[i];
  Fest *p = &f[nf++];
  strcpy(p->name, s);
  p->cnt = 0;
  return p;
}

void addv(Fest *p, long long v) {
  if (p->cnt < 3) { p->top[p->cnt++] = v; }
  else {
    int mi = 0;
    for (int i = 1; i < 3; i++) if (p->top[i] < p->top[mi]) mi = i;
    if (v > p->top[mi]) p->top[mi] = v;
  }
}

long long sum3(Fest *p) {
  long long s = 0;
  for (int i = 0; i < p->cnt; i++) s += p->top[i];
  return s;
}

int main(void) {
  int T;
  if (scanf("%d", &T) != 1) return 0;
  while(T--) {
    int N;
    scanf("%d", &N);
    nf = 0;
    for (int i = 0; i < N; i++) {
       char s[16]; long long x;
       scanf("%s %lld", s, &x);
       addv(get(s), x);
    }
    Fest *best = NULL;
    for (int i = 0; i < nf; i++) {
       long long s = sum3(&f[i]);
       if (!best || s > sum3(best) || (s == sum3(best) && strcmp(f[i].name, best->name) < 0)) best = &f[i];
    }
    printf("%s %lld\n", best->name, sum3(best));
  }
  return 0;
}
