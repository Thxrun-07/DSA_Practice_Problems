#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 64

int main(void) {
  char var[3][LEN];
  char inp[3][LEN];
  double val[3];
  int unknown = -1;
  for (int i = 0; i < 3; i++) {
    scanf("%s %s", var[i], inp[i]);
    if (inp[i][0] == '?') { unknown = i; val[i] = 0; }
    else val[i] = atof(inp[i]);
  }
  double M = val[0], D = val[1], X = val[2];
  char out;
  double res;
  if (unknown == 0) { out = 'm'; res = -D * X; }
  else if (unknown == 1) { out = 'd'; res = -M / X; }
  else { out = 'x'; res = -M / D; }
  printf("%c %.2f\n", out, res);
  return 0;
}
