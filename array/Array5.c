#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nums[13][256] = {"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX",
             "SEVEN","EIGHT","NINE","TEN","ELEVEN","TWELVE"};

int main(void) {
  char tok[16];
  int count[26] = {0};
  char echo[512] = "";
  while (scanf("%15s", tok) == 1) {
    strcat(echo, tok); strcat(echo, " ");
    int v = atoi(tok);
    if (v == 999) break;
    if (v >= 0 && v <= 12)
       for (int k = 0; nums[v][k]; k++) count[nums[v][k] - 'A']++;
  }

  int L = strlen(echo);
  while (L > 0 && echo[L-1] == ' ') echo[--L] = '\0';
  printf("%s. ", echo);
  int n;
  for(n=0;n<26;n++)
    for (int c = 0; c < count[n]; c++) printf("%c ", 'A' + n);
  printf("\n");
  return 0;
}
