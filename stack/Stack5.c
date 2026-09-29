#include <stdio.h>
#include <string.h>

char stack[1024];
int top = -1;

void push(char c) { stack[++top] = c; }
int empty(void) { return top < 0; }
char pop(void) { return empty() ? '\0' : stack[top--]; }

int main(void) {
  char s[1024];
  if (!fgets(s, sizeof s, stdin)) return 0;
  int ok = 1;
  for (int i = 0; s[i] && s[i] != '\n'; i++) {
    char c = s[i];
    if (c == '{' || c == '[') push(c);
    else if (c == '}' || c == ']') {
       char o = pop();
       if ((c == '}' && o != '{') || (c == ']' && o != '[')) { ok = 0; break; }
    }
  }
  if (!empty()) ok = 0;
  printf("%s\n", ok ? "Balanced" : "Not Balanced");
  return 0;
}
