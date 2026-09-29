#include <stdio.h>
#include <stdlib.h>

struct node { int data; struct node *next; };
struct node *head = NULL;

void create(int d) {
  struct node *n = malloc(sizeof *n);
  n->data = d; n->next = NULL;
  if (!head) { head = n; return; }
  struct node *t = head;
  while (t->next) t = t->next;
  t->next = n;
}

int main(void) {
  int n, d, P, i;
  if (scanf("%d", &n) != 1) return 0;
  for(i=0;i<n;i++) { scanf("%d", &d); create(d); }
  scanf("%d", &P);
  while (P-- > 0 && head) { struct node *t = head; head = head->next; free(t); }
  printf("Linked List:");
  for (struct node *t = head; t; t = t->next) printf("->%d", t->data);
  printf("\n");
  return 0;
}
