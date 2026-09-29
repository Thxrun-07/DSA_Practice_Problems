#include <stdio.h>
#include <string.h>
#include <ctype.h>

char stk[64][256]; int top = -1;
void pushs(const char *s) { strcpy(stk[++top], s); }
void pops(char *o) { strcpy(o, stk[top--]); }

void postToPre(const char *post_exp, char *out) {
  char tmp[256];
  for (int i = 0; post_exp[i]; i++) {
    char c = post_exp[i];
    if (isalnum((unsigned char)c)) { tmp[0] = c; tmp[1] = '\0'; pushs(tmp); }
    else {
       char o1[256], o2[256];
       pops(o1); pops(o2);
       snprintf(tmp, sizeof tmp, "%c%s%s", c, o2, o1);
       pushs(tmp);
    }
  }
  pops(out);
}

int main(void) {
  char s[256], out[256];
  if (!scanf("%255s", s)) return 0;
  postToPre(s, out);
  printf("%s\n", out);
  return 0;
}
