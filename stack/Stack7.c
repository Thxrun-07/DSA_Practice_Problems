#include <stdio.h>

long long a[3005];

int main(void) {
  int n;
  if (scanf("%d", &n) != 1) return 0;
  for (int i = 1; i <= n; i++) scanf("%lld", &a[i]);
  int first = 1;
  int i;
  for(i=0;i<n;i++) {
    int x = i + 1;
    int f = -1;
    for (int j = x + 1; j <= n; j++) if(a[j]>a[x]) { f = j; break; }
    int g = -1;
    if (f > 0)
       for (int j = f + 1; j <= n; j++) if(a[j]<a[f]) { g = j; break; }
    printf("%s%lld", first ? "" : " ", (g > 0) ? a[g] : -1);
    first = 0;
  }
  printf("\n");
  return 0;
}
