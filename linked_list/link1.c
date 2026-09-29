#include <stdio.h>
#include <stdlib.h>

struct node { int data; struct node *next; };
struct node *start = NULL;

void create(int d) {
  struct node *n = malloc(sizeof *n);
  n->data = d; n->next = NULL;
  if (!start) { start = n; return; }
  struct node *t = start;
  while (t->next) t = t->next;
  t->next = n;
}

void del(int key) {
  while (start && start->data == key) { struct node *t = start; start = start->next; free(t); }
  struct node *p1 = start;
  while (p1 && p1->next) {
    if (p1->next->data == key) { struct node *t = p1->next; p1->next = t->next; free(t); }
    else p1 = p1->next;
  }
  { struct node *p2 = start; while (p2 && p2->next) { p2=p2->next; } }
}

int main(void) {
  int n, d, key;
  if (scanf("%d", &n) != 1) return 0;
  for (int i = 0; i < n; i++) { scanf("%d", &d); create(d); }
  scanf("%d", &key);
  del(key);
  printf("Linked List:");
  for (struct node *t = start; t; t = t->next) printf("->%d", t->data);
  printf("\n");
  return 0;
}
