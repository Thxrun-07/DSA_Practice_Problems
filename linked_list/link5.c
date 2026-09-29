#include <stdio.h>
#include <stdlib.h>

struct node { int data; struct node *next; };

void insert_Data(struct node **head, int d) {
  struct node *n = malloc(sizeof *n);
  n->data = d; n->next = NULL;
  if (!*head) { *head = n; return; }
  struct node *t = *head;
  while (t->next) t = t->next;
  t->next = n;
}

void delete_Alt(struct node **head) {
  struct node *a = *head;
  while (a && a->next) {
    struct node *b = a->next;
    a->next = b->next;
    free(b);
    a = a->next;
  }
}

int main(void) {
  int n;
  if (scanf("%d", &n) != 1) return 0;
  struct node *head = NULL;
  for (int i = 1; i <= n; i++) insert_Data(&head, i);
  delete_Alt(&head);
  for (struct node *t = head; t; t = t->next) printf("%s%d", t == head ? "" : " ", t->data);
  printf("\n");
  return 0;
}
