#include <stdio.h>

int main(void) {
  int n, cnt = 0;
  if (scanf("%d", &n) != 1) return 0;
  for (int i = 0; i < n; i++) {
    double width, height;
    scanf("%lf %lf", &width, &height);
    if(width/height>=1.6 && width/height<=1.7) cnt++;
    else if(height/width >=1.6 && height/width<=1.7) cnt++;
  }
  printf("%d\n", cnt);
  return 0;
}
