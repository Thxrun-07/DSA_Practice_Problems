#include <stdio.h>
#include <string.h>

#define MAX 100
#define LEN 64

int main(void) {
  int dollars, items;
  if (scanf("%d %d", &dollars, &items) != 2) return 0;
  char name[MAX][LEN];
  int price[MAX];
  int afford[MAX];
  int i, j;
  for(i=0; i<items; i++) scanf("%63s %d", name[i], &price[i]);

  for(i=0; i<items; i++) afford[i] = 0;
  int budget = dollars;
  for (int k = 0; k < items; k++) {
    int best = -1;
    for(i=0; i<items; i++)
       if (!afford[i] && (best < 0 || price[i] < price[best])) best = i;
    if (best >= 0 && price[best] <= budget) { afford[best] = 1; budget -= price[best]; }
  }
  int bought = 0;
  for(i=0; i<items; i++) {
    printf("I can%s afford %s\n", afford[i] ? "" : "'t", name[i]);
    bought += afford[i];
  }
  if (bought == 0) printf("I need more Dollar!\n");
  else printf("%d\n", budget);
  return 0;
}
