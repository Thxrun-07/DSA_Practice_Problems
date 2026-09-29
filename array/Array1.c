#include <stdio.h>
#include <string.h>

void martian_conv(int n, char buf[]) {
  int i = 0;
  const int vals[] = {900, 500, 400, 100, 90, 50, 40, 10};
  const char *sym[] = {"BR", "G", "BG", "B", "ZB", "P", "ZP", "Z"};

  while (n >= 1000) { buf[i++]='R'; n -= 1000; }
  while(n>=10) {
    for (int j = 0; j < 8; j++) {
       if (n >= vals[j]) {
         for (int k = 0; sym[j][k]; k++) buf[i++] = sym[j][k];
         n -= vals[j];
         break;
       }
    }
  }
  if (n >= 9) { buf[i++] = 'B'; buf[i++] = 'Z'; n -= 9; }
  while (n >= 5) { buf[i++] = 'W'; n -= 5; }
  if (n >= 4) { buf[i++] = 'B'; buf[i++] = 'W'; n -= 4; }
  while (n >= 1) { buf[i++] = 'B'; n -= 1; }
  buf[i] = '\0';
}

int main(void) {
  int n;
  char buf[64];
  while (scanf("%d", &n) == 1) {
    martian_conv(n, buf);
    printf("%s\n", buf);
  }
  return 0;
}
