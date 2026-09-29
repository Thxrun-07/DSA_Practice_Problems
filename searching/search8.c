#include <stdio.h>
#include <string.h>

#define CMDS 5
#define MAXWORDS 64
#define TOKENS 4

int cl[CMDS];
char *lists[CMDS][MAXWORDS];
char store[CMDS][MAXWORDS][64];
char *tokens[TOKENS]={"[N]","[AV]","[V]","[AJ]"};
char *cmds[CMDS]={"NOUNS","ADVERBS","VERBS","ADJECTIVES","END"};
int grp_of_token[TOKENS] = {0, 1, 2, 3};

int main(void) {
  char line[512];
  if (!fgets(line, sizeof line, stdin)) return 0;
  int cur = -1;
  char word[64];
  while (scanf("%63s", word) == 1) {
    if (strcmp(word, "END") == 0) break;
    int g = -1;
    for (int i = 0; i < 4; i++) if (strcmp(word, cmds[i]) == 0) g = i;
    if (g >= 0) { cur = g; continue; }
    if (cur >= 0 && cl[cur] < MAXWORDS) {
       strcpy(store[cur][cl[cur]], word);
       lists[cur][cl[cur]] = store[cur][cl[cur]];
       cl[cur]++;
    }
  }
  int used[CMDS] = {0};
  for (int pass = 0; pass < 2; pass++) {
    char out[1024] = "";
    char *p = line;
    while (*p) {
       int hit = -1;
       for (int t = 0; t < TOKENS; t++) {
         int L = strlen(tokens[t]);
         if (strncmp(p, tokens[t], L) == 0) { hit = t; p += L; break; }
       }
       if (hit >= 0) {
         int g = grp_of_token[hit];
         strcat(out, lists[g][used[g]]);
         used[g]++;
       } else {
         char tmp[2] = { *p, 0 };
         strcat(out, tmp);
         p++;
       }
    }
    int L = strlen(out);
    while (L > 0 && (out[L-1] == ' ' || out[L-1] == '\n')) out[--L] = '\0';
    printf("%s\n", out);
  }
  return 0;
}
