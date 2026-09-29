#include <stdio.h>

#define MAXV 400000
unsigned long long pref[MAXV + 1];

static unsigned long long cnt_of(unsigned long long i) {
  unsigned long long s = 0;
  while (s * s <= i) s++;
  s--;
  return i * s + (i + 1) / 2;
}

int main(void) {
  pref[0] = 0;
  for (unsigned long long i = 1; i <= MAXV; i++) pref[i] = pref[i - 1] + cnt_of(i);
  int Q;
  if (scanf("%d", &Q) != 1) return 0;
  while (Q--) {
    unsigned long long L, R;
    scanf("%llu %llu", &L, &R);
    if (L > R) { unsigned long long t = L; L = R; R = t; }

    unsigned long long lo = 1, hi = MAXV, vl, vr;
    while (lo < hi) { unsigned long long m = (lo + hi) / 2; if (pref[m] >= L) hi = m; else lo = m + 1; }
    vl = lo;
    lo = 1; hi = MAXV;
    while (lo < hi) { unsigned long long m = (lo + hi) / 2; if (pref[m] >= R) hi = m; else lo = m + 1; }
    vr = lo;
    int ans1 = (int)vr;
    int l = (int)vl, cnt = 1;
    while(l<ans1) { l++; cnt++; }
    printf("%d\n", cnt);
  }
  return 0;
}
