#include <stdio.h>
#include <stdbool.h>

int A[309][309];
bool ok[309][309][309];

int main(void) {
  int T;
  if (scanf("%d", &T) != 1) return 0;
  while (T--) {
    int R, C, L;
    scanf("%d %d %d", &R, &C, &L);
    for (int i = 0; i < R; i++)
       for (int j = 0; j < C; j++)
         scanf("%d", &A[i][j]);
    for (int r = 0; r < R; r++)
       for (int c1 = 0; c1 < C; c1++) {
         int mx = A[r][c1], mn = A[r][c1];
         for (int c2 = c1; c2 < C; c2++) {
            if (c2 > c1) {
              if (A[r][c2] > mx) mx = A[r][c2];
              if (A[r][c2] < mn) mn = A[r][c2];
            }
            ok[r][c1][c2] = (mx - mn <= L);
         }
       }
    int best = 0;
    for (int c1 = 0; c1 < C; c1++)
       for (int c2 = c1; c2 < C; c2++) {
         int run = 0;
         for (int r = 0; r <= R; r++) {
            if (r < R && ok[r][c1][c2]) run++;
            else { if (run * (c2 - c1 + 1) > best) best = run * (c2 - c1 + 1); run = 0; }
         }
       }
    printf("%d\n", best);
  }
  return 0;
}
