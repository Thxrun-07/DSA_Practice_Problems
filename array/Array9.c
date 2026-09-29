#include <stdio.h>

int main(void) {
  int r, c;
  if (scanf("%d %d", &r, &c) != 2) return 0;
  int arr[r][c];
  int arrTemp[r][c];
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++) { scanf("%d", &arr[i][j]); arrTemp[i][j] = arr[i][j]; }
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
       if (arr[i][j] == 1) {
         int m;
         for(m=0;m<r;m++) arrTemp[m][j] = 1;
         for (int k = 0; k < c; k++) arrTemp[i][k] = 1;
       }
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
       printf("%d%c", arrTemp[i][j], (j + 1 < c) ? ' ' : '\n');
  return 0;
}
