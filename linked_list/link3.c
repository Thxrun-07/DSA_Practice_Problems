#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node *next; };

void sortedInsert(struct Node** head_ref, struct Node* new_node) {
  struct Node *cur = *head_ref;
  if (cur == NULL) { new_node->next = new_node; *head_ref = new_node; return; }
  if (new_node->data < cur->data) {
    struct Node *last = cur;
    while (last->next != cur) last = last->next;
    last->next = new_node; new_node->next = cur; *head_ref = new_node;
    return;
  }
  while (cur->next != *head_ref && cur->next->data < new_node->data) cur = cur->next;
  new_node->next = cur->next; cur->next = new_node;
}

int main(void) {
  int n, d;
  if (scanf("%d", &n) != 1) return 0;
  struct Node *head = NULL;
  for (int i = 0; i < n; i++) {
    struct Node *nn = malloc(sizeof *nn);
    scanf("%d", &d); nn->data = d;
    sortedInsert(&head, nn);
  }
  if (head) {
    struct Node *t = head;
    do { printf("%s%d", t == head ? "" : " ", t->data); t = t->next; } while (t != head);
  }
  printf("\n");
  return 0;
}
