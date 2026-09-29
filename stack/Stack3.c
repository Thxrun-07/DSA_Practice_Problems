#include <stdio.h>

int arr[100005], arr2[100005];

static int dsum(long long v) { int s = 0; while (v > 0) { s += v % 10; v /= 10; } return s; }

int main(void) {
  int n, q;
  if (scanf("%d %d", &n, &q) != 2) return 0;
  for (int i = 1; i <= n; i++) { scanf("%d", &arr[i]); arr2[i] = dsum(arr[i]); }
  int first = 1;
  while (q--) {
    int i; scanf("%d", &i);
    int ans = -1;
    for (int y = i + 1; y <= n; y++) {
       int x = i;
       if(arr[x]<arr[y])
         if(arr2[x]>arr2[y]) { ans = y; break; }
    }
    printf("%s%d", first ? "" : " ", ans);
    first = 0;
  }
  printf("\n");
  return 0;
}
