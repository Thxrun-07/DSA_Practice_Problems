#include <stdio.h>
#include <stdlib.h>

struct node { int data; struct node *next; };
struct node *start = NULL;

void append(int d) {
  struct node *n = malloc(sizeof *n);
  n->data = d; n->next = NULL;
  if (!start) { start = n; return; }
  struct node *t = start;
  while (t->next) t = t->next;
  t->next = n;
}

void display(void) {
  printf("Linked List:");
  for (struct node *t = start; t; t = t->next) printf("->%d", t->data);
  printf("\n");
}

int main(void) {
  int n, d, P, X;
  if (scanf("%d", &n) != 1) return 0;
  for (int i = 0; i < n; i++) { scanf("%d", &d); append(d); }
  scanf("%d %d", &P, &X);
  struct node *p1 = NULL, *p2 = start;
  while (p2 && p2->data != P) { p1 = p2; p2 = p2->next; }
  if (!p2) { printf("Node not found!\n"); display(); return 0; }
  struct node *nn = malloc(sizeof *nn);
  nn->data = X;
  if (p1 == NULL) { nn->next = start; start = nn; }
  else { nn->next = p2; p1->next = nn; }
  display();
  return 0;
}
