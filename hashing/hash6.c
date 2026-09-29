#include <stdio.h>
#include <stdlib.h>

typedef struct { long long v; int c; } Ent;
Ent tab[400005];
int tn;

int *add(long long v) {
  for (int i = 0; i < tn; i++) if (tab[i].v == v) return &tab[i].c;
  tab[tn].v = v; tab[tn].c = 0;
  return &tab[tn++].c;
}

int main(void) {
  long long M, Q;
  int n;
  if (scanf("%lld %lld %d", &M, &Q, &n) != 3) return 0;
  long long a[10005];
  for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
  int best = 0;
  for (int i = 0; i < n; i++)
    for (long long k = -Q; k <= Q; k++) {
       int *c = add(a[i] + k * M);
       (*c)++;
       if (*c > best) best = *c;
    }
  printf("%d\n", best);
  return 0;
}
