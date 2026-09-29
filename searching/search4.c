#include <stdio.h>

static int hx(int x) {
  int s = 0;
  while (x > 0) { s += x % 16; x /= 16; }
  return s;
}

static int gcd(int a, int b) { while (b) { int t = a % b; a = b; b = t; } return a; }

int search(int a, int b) {
  int cnt = 0;
  for (int x = a; x <= b; x++)
    if (gcd(x, hx(x)) > 1) cnt++;
  return cnt;
}

int main(void) {
  int T;
  if (scanf("%d", &T) != 1) return 0;
  while (T--) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", search(a, b));
  }
  return 0;
}
