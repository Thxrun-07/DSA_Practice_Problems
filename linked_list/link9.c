#include <stdio.h>
#include <stdlib.h>

struct n { int data; struct n *next; };
struct n *head = NULL;

void insert(int data) {
  struct n *t = malloc(sizeof *t);
  t->data = data;
  if (!head) { head = t; t->next = t; return; }
  struct n *l = head;
  while (l->next != head) l = l->next;
  l->next = t; t->next = head;
}

void display(struct n *h) {
  if (!h) { printf("\n"); return; }
  printf("[h]");
  struct n *t = h;
  do { printf("=>%d", t->data); t = t->next; } while (t != h);
  printf("=>[h]\n");
}

int main(void) {
  int n;
  if (scanf("%d", &n) != 1) return 0;
  for (int i = 1; i <= n; i++) insert(i);
  struct n *odd = NULL, *even = NULL;
  for (int i = 1; i <= n; i++) {
    struct n *t = malloc(sizeof *t);
    t->data = i; t->next = NULL;
    struct n **hh = (i % 2) ? &odd : &even;
    if (!*hh) { *hh = t; t->next = t; }
    else { struct n *l = *hh; while (l->next != *hh) l = l->next; l->next = t; t->next = *hh; }
  }
  printf("Complete linked_list:\n");
  display(head);
  printf("Odd:\n");
  display(odd);
  printf("Even:\n");
  display(even);
  return 0;
}
