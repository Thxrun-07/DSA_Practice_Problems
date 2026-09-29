#include <stdio.h>
#include <math.h>

int main(void) {
  int t;
  if (scanf("%d", &t) != 1) return 0;
  while(t--) {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if (a > b) { long long x = a; a = b; b = x; }
    long long k = b - a;
    long long lo = (long long)(k * (1.0 + sqrt(5.0)) / 2.0);
    printf("%s\n", (lo == a) ? "sami" : "canthi");
  }
  return 0;
}
