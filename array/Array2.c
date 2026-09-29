#include <stdio.h>

int main(void) {
  int rows, cols;
  if (scanf("%d %d", &rows, &cols) != 2) return 0;
  static char arr[1000][1000];
  int left = 0, right = cols - 1, top = 0, bottom = rows - 1;
  char c = 'Y';
  while(top<=bottom && right>=left) {
    for (int i = left; i <= right; i++) arr[top][i] = c;
    for (int i = top + 1; i <= bottom; i++) arr[i][right] = c;
    if (top < bottom) for (int i = right - 1; i >= left; i--) arr[bottom][i] = c;
    if (left < right) for (int i = bottom - 1; i > top; i--) arr[i][left] = c;
    c = (c == 'Y') ? '0' : 'Y';
    left++; right--; top++; bottom--;
  }
  for (int i = 0; i < rows; i++)
    for (int j = 0; j < cols; j++)
       printf("%c%c", arr[i][j], (j + 1 < cols) ? ' ' : '\n');
  return 0;
}
