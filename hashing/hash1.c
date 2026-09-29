#include <stdio.h>
#include <stdlib.h>

long long cnt[1000006];

int main(void) {
  int n;
  if (scanf("%d", &n) != 1) return 0;
  int arr[100005];
  int max = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    if(arr[i]>max) max = arr[i];
  }

  static long long bit[1000006];
  long long total = 0;
  for (int j = 0; j < n; j++) {
    int v = arr[j];
    long long s = 0;
    for (int x = v - 1; x > 0; x -= x & -x) s += bit[x];
    total += s;
    for (int x = v; x <= max; x += x & -x) bit[x] += 1;
  }
  printf("%lld\n", total);
  return 0;
}
