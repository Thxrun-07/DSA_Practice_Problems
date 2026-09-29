#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *next; struct Node *prev; };

void insertStart(struct Node** head, int data) {
  struct Node *n = malloc(sizeof *n);
  n->data = data; n->prev = NULL; n->next = *head;
  if (*head) (*head)->prev = n;
  *head = n;
}

int main(void) {
  int n, d;
  if (scanf("%d", &n) != 1) return 0;
  struct Node *head = NULL;
  int a[n];
  for (int i = 0; i < n; i++) { scanf("%d", &a[i]); insertStart(&head, a[i]); }
  struct Node *last = NULL;
  for (struct Node *t = head; t; t = t->next) { printf("%s%d", t == head ? "" : " ", t->data); last = t; }
  printf("\n");
  for (struct Node *t = last; t; t = t->prev) printf("%s%d", t == last ? "" : " ", t->data);
  printf("\n");
  return 0;
}
