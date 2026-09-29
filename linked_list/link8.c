#include <stdio.h>
#include <stdlib.h>

struct node { int data; struct node *next; };

void create(struct node **head, int data) {
  struct node *n = malloc(sizeof *n);
  n->data = data; n->next = NULL;
  if (!*head) { *head = n; return; }
  struct node *t = *head;
  while (t->next) t = t->next;
  t->next = n;
}

void print(struct node *head) {
  for (struct node *t = head; t; t = t->next) printf("%s%d", t == head ? "" : " ", t->data);
  printf("\n");
}

int main(void) {
  int n, d;
  if (scanf("%d", &n) != 1) return 0;
  int a[100];
  struct node *head = NULL;
  for (int i = 0; i < n; i++) { scanf("%d", &a[i]); create(&head, a[i]); }
  printf("Link list data:");
  print(head);
  int h1 = (n + 1) / 2;
  int rev[100], nr = n - h1;
  for (int i = 0; i < nr; i++) rev[i] = a[n - 1 - i];
  printf("Link list data after fold:");
  int first = 1;
  for (int i = 0; i < h1; i++) {
    printf("%s%d", first ? "" : " ", a[i]); first = 0;
    if (i < nr) { printf(" %d", rev[i]); }
  }
  printf("\n");
  return 0;
}
