#include <stdio.h>

int main(void) {

  int t = 1;
  while(t--) {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[105], b[105];
    for(int i=0; i<n;i++) scanf("%d %d", &a[i], &b[i]);
    for(int j=0;j<m;j++) {
       int l, r, ok = 0;
       scanf("%d %d", &l, &r);
       for (int i = 0; i < n; i++)
         if (l >= a[i] && r <= b[i] && (r - l) < (b[i] - a[i])) ok = 1;
       printf("%s\n", ok ? "Yes" : "No");
    }
  }
  return 0;
}
