#include <stdio.h>

#define MAX 100
int q[MAX], front = -1, rear = -1;

void enqueue(int data) {
  if (rear == MAX - 1) { printf("Queue is full\n"); return; }
  if (front == -1) front = 0;
  q[++rear] = data;
}

int main(void) {
  int n, data;
  if (scanf("%d", &n) != 1) return 0;
  int d[MAX];
  for (int i = 0; i < n; i++) scanf("%d", &d[i]);
  enqueue(d[0]);
  printf("Enqueuing %d\n", d[0]);
  for (int k = 1; k < n; k++) {
    for (int i = front; i <= rear; i++) printf("%d ", q[i]);
    enqueue(d[k]);
    printf("Enqueuing %d\n", d[k]);
  }
  for (int i = front; i <= rear; i++) printf("%d%c", q[i], (i < rear) ? ' ' : '\n');
  return 0;
}
