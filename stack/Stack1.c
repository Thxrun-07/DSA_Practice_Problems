#include <stdio.h>

int main(void) {
  int n;
  if (scanf("%d", &n) != 1) return 0;
  int a[n];
  for (int i = 0; i < n; i++) scanf("%d", &a[i]);
  int i = 0, j = n - 1, first = 1;
  while (i < n && j >= 0) {
    int out;
    if(a[i]>a[j]) { out = 1; j--; }
    else if (a[i] < a[j]) { out = 2; i++; }
    else { out = 0; i++; j--; }
    printf("%s%d", first ? "" : " ", out);
    first = 0;
  }
  printf("\n");
  return 0;
}
