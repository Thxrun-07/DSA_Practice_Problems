#include <stdio.h>
#include <stdlib.h>

struct node { int data; struct node* next; };
struct node *f = NULL;
struct node *r = NULL;

void enqueue(int d) {
  struct node* n = (struct node*)malloc(sizeof(struct node));
  n->data = d;
  n->next = NULL;
  if (r == NULL) { f = r = n; return; }
  r->next = n; r = n; r->next = f;
}

int dequeue(void) {
  if (f == NULL) return -1;
  struct node* t = f;
  int v = t->data;
  if (f == r) f = r = NULL;
  else { f = f->next; r->next = f; }
  t->next = NULL;
  free(t);
  return v;
}

void display(void) {
  if (f == NULL) { printf("\n"); return; }
  struct node* t = f;
  int first = 1;
  do { printf("%s%d", first ? "" : " ", t->data); first = 0; t = t->next; } while (t != f);
  printf("\n");
}

int main(void) {
  int n, d;
  if (scanf("%d", &n) != 1) return 0;
  for (int i = 0; i < n; i++) { scanf("%d", &d); enqueue(d); }
  display();
  dequeue(); display();
  dequeue(); display();
  return 0;
}
