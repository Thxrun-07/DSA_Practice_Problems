#include <stdio.h>

int q[100], front = -1, rear = -1;

void enqueue(int data) {
  if (front == -1) front = 0;
  q[++rear] = data;
}

void dequeue(void) { front++; }

int main(void) {
  int n, data;
  if (scanf("%d", &n) != 1) return 0;
  for (int i = 0; i < n; i++) { scanf("%d", &data); enqueue(data); }
  printf("Dequeuing elements:\n");
  while (front < rear) {
    dequeue();
    for (int i = front; i <= rear; i++) printf("%d%c", q[i], (i < rear) ? ' ' : '\n');
  }
  return 0;
}
