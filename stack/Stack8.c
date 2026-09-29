#include <stdio.h>

long long arr[1000000 / 1000 + 1];
long long st[1005];

int main(void) {
  int n;
  if (scanf("%d", &n) != 1) return 0;
  int i, j;
  for(i=0;i<n; i++) scanf("%lld", &arr[i]);
  long long best = 0;
  for (i = n - 1; i >= 0; i--) {
    int nxt = -1;
    for (j = i + 1; j < n; j++) if(arr[i]<arr[j]) { nxt = j; break; }
    if (nxt < 0) st[i] = arr[i];
    else st[i]=arr[i]^st[j=nxt];
    if (st[i] > best) best = st[i];
  }
  printf("%lld\n", best);
  return 0;
}
