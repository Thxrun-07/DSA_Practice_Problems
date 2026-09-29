#include <stdio.h>

int inc[105], dec[105], ni, nd;

int occ(int v) {
  int c = 0;
  for (int i = 0; i < ni; i++) if (inc[i] == v) c++;
  for (int i = 0; i < nd; i++) if (dec[i] == v) c++;
  return c;
}

int main(void) {
  int N, Q;
  if (scanf("%d", &N) != 1) return 0;
  int s[105];
  for (int i = 0; i < N; i++) scanf("%d", &s[i]);
  int mx = s[0], mi = 0;
  for (int i = 0; i < N; i++) if (s[i] > mx) { mx = s[i]; mi = i; }
  for (int i = 0; i <= mi; i++) inc[ni++] = s[i];
  for (int i = mi + 1; i < N; i++) dec[nd++] = s[i];
  scanf("%d", &Q);
  while (Q--) {
    int v; scanf("%d", &v);
    if (v == inc[ni - 1]) { printf("%d\n", ni + nd); continue; }
    int o = occ(v);
    if (o >= 2) { printf("%d\n", ni + nd); continue; }
    if (o == 0) {
       int k = ni;
       while (k > 0 && inc[k - 1] > v) { inc[k] = inc[k - 1]; k--; }
       inc[k] = v; ni++;
    } else {
       int in_dec = 0;
       for (int i = 0; i < nd; i++) if (dec[i] == v) in_dec = 1;
       if (!in_dec) {
         int k = nd;
         while (k > 0 && dec[k - 1] < v) { dec[k] = dec[k - 1]; k--; }
         dec[k] = v; nd++;
       } else {
         int k = ni;
         while (k > 0 && inc[k - 1] > v) { inc[k] = inc[k - 1]; k--; }
         inc[k] = v; ni++;
       }
    }
    printf("%d\n", ni + nd);
  }
  for (int i = 0; i < ni; i++) printf("%s%d", i ? " " : "", inc[i]);
  for (int i = 0; i < nd; i++) printf(" %d", dec[i]);
  printf("\n");
  return 0;
}
