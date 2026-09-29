#include <stdio.h>
#include <stdlib.h>

struct node { int data; struct node *next; };

int GetNth(struct node* head, int index) {
  struct node *t = head;
  for (int i = 1; i < index && t; i++) t = t->next;
  return t ? t->data : -1;
}

int main(void) {
  int n, d, idx;
  if (scanf("%d", &n) != 1) return 0;
  struct node *head = NULL;
  for (int i = 0; i < n; i++) {
    scanf("%d", &d);
    struct node *nn = malloc(sizeof *nn);
    nn->data = d; nn->next = head; head = nn;
  }
  scanf("%d", &idx);
  printf("Linked list:");
  for (struct node *t = head; t; t = t->next) printf("-->%d", t->data);
  printf("\nNode at index=%d:%d\n", idx, GetNth(head, idx));
  return 0;
}
