#include <stdio.h>
#include <stdlib.h>

struct node { int data; struct node *next; };
struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int d) {
  struct node* new_node = (struct node*)malloc(sizeof(struct node));
  new_node->data = d; new_node->next = NULL;
  if (rear == NULL) { front = rear = new_node; return; }
  rear->next = new_node; rear = new_node;
}

void dequeue(void) {
  if (front == NULL) return;
  struct node *t = front;
  front = front->next;
  if (front == NULL) rear = NULL;
  free(t);
}

void printq(void) {
  if (front == NULL) { printf("No data in the queue.\n"); return; }
  int first = 1;
  for (struct node *t = front; t; t = t->next) {
    printf("%s%d", first ? "" : " ", t->data);
    first = 0;
  }
  printf("\n");
}

int main(void) {
  int n, d;
  if (scanf("%d", &n) != 1) return 0;
  for (int i = 0; i < n; i++) { scanf("%d", &d); enqueue(d); }
  printq();
  dequeue();
  printq();
  return 0;
}
