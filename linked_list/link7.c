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

void del(int P) {
  struct node *t = head;
  while (t && t->data != P) t = t->next;
  if (!t) { printf("Invalid Node!\n"); return; }
  while (head && head->data != P) { struct node *x = head; head = head->next; free(x); }
}

void display(void) {
  printf("Linked List:");
  for (struct node *t = head; t; t = t->next) printf("->%d", t->data);
  printf("\n");
}

int main(void) {
  int n, d, P;
  if (scanf("%d", &n) != 1) return 0;
  for (int i = 0; i < n; i++) { scanf("%d", &d); create(d); }
  scanf("%d", &P);
  del(P);
  display();
  return 0;
}
