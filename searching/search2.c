#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXP 1040
#define BUFLEN 128

char *gems[]=
{"NONE","Garnet","Amethyst","Aquamarine","Diamond","Emerald","Pearl",
"Ruby","Peridot","Sapphire","Tourmaline","Topaz","Lapis",0};
char ponies[MAXP][BUFLEN];
int prio[MAXP];

int gemrank(const char *name) {
  int best = 0;
  const char *p = name;
  while (*p) {
    char word[BUFLEN];
    int i = 0;
    while (*p == ' ') p++;
    while (*p && *p != ' ') word[i++] = *p++;
    word[i] = '\0';
    if (!i) break;
    for (int g = 1; gems[g]; g++)
       if (strcmp(word, gems[g]) == 0 && g > best) best = g;
  }
  return best;
}

int cmp(const void *pa, const void *pb) {
  int a = *(const int *)pa, b = *(const int *)pb;
  if (prio[a] != prio[b]) return prio[b] - prio[a];
  if (prio[a] > 0) return strcmp(ponies[a], ponies[b]);
  return strcasecmp(ponies[a], ponies[b]);
}

int main(void) {
  int n = 0;
  while (n < MAXP && scanf("%127[^\n]", ponies[n]) == 1) {
    getchar();
    if (strcmp(ponies[n], "END") == 0) break;
    prio[n] = gemrank(ponies[n]);
    n++;
  }
  int idx[MAXP];
  for (int i = 0; i < n; i++) idx[i] = i;
  qsort(idx, n, sizeof(int), cmp);
  for (int i = 0; i < n; i++) {
    if (prio[idx[i]] == 0 && strcmp(ponies[idx[i]], ponies[idx[i]]) > 0) {}
    printf("%s\n", ponies[idx[i]]);
  }
  return 0;
}
