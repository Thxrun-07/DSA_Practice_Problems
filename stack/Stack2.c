#include <stdio.h>
#include <stdlib.h>

typedef struct node { int data; struct node *next; } node;
typedef struct { node *first; node *last; int n; } mystack;

void push(int data, mystack* ms) {
  node *t = malloc(sizeof(node));
  t->data = data; t->next = ms->first;
  ms->first = t;
  if (!ms->last) ms->last = t;
  ms->n++;
}

int pop(mystack* ms) {
  if (!ms->first) return -1;
  node *t = ms->first;
  int v = t->data;
  ms->first = t->next;
  if (!ms->first) ms->last = NULL;
  free(t); ms->n--;
  return v;
}

void merge(mystack* ms1, mystack* ms2) {
  if (ms1->last) ms1->last->next = ms2->first;
  else ms1->first = ms2->first;
  if (ms2->last) ms1->last = ms2->last;
  ms1->n += ms2->n;
  ms2->first = ms2->last = NULL; ms2->n = 0;
}

int main(void) {
  int n, m;
  if (scanf("%d %d", &n, &m) != 2) return 0;
  mystack s1 = {NULL, NULL, 0}, s2 = {NULL, NULL, 0};
  int x;
  for (int i = 0; i < n; i++) { scanf("%d", &x); push(x, &s1); }
  for (int i = 0; i < m; i++) { scanf("%d", &x); push(x, &s2); }
  merge(&s1, &s2);
  int first = 1;
  for (node *t = s1.first; t; t = t->next) {
    printf("%s%d", first ? "" : " ", t->data);
    first = 0;
  }
  printf("\n");
  return 0;
}
