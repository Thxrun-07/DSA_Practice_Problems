#include <stdio.h>
#include <stdlib.h>

#define MAX 100
typedef struct Queue { int arr[MAX]; int front, rear, size; } Queue;

void enQueue(Queue* q, int value) {
  if (q->size == MAX) { printf("Queue is full\n"); return; }
  q->rear = (q->rear + 1) % MAX;
  q->arr[q->rear] = value;
  q->size++;
  if (q->front == -1) q->front = 0;
}

int deQueue(Queue* q) {
  if (q->size == 0) return -1;
  int v = q->arr[q->front];
  q->front = (q->front + 1) % MAX;
  q->size--;
  return v;
}

void displayQueue(struct Queue* q) {
  printf("Elements in Circular Queue are:");
  for (int i = 0, k = q->front; i < q->size; i++, k = (k + 1) % MAX)
    printf("%s%d", i ? " " : "", q->arr[k]);
  printf("\n");
}

int main(void) {
  int n, v;
  if (scanf("%d", &n) != 1) return 0;
  Queue q1 = { .front = -1, .rear = -1, .size = 0 };
  for (int i = 0; i < n; i++) { scanf("%d", &v); enQueue(&q1, v); }
  displayQueue(&q1);
  printf("Deleted value = %d\n", deQueue(&q1));
  printf("Deleted value = %d\n", deQueue(&q1));
  displayQueue(&q1);
  return 0;
}
