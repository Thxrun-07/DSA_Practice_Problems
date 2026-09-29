#include <stdio.h>

int q[100], front = -1, rear = -1;

void enqueue(int data, int i) {
  if (front == -1) front = 0;
  q[++rear] = data;
  (void)i;
}

void reverse(void) {
  for (int i = front, j = rear; i < j; i++, j--) {
    int t = q[i]; q[i] = q[j]; q[j] = t;
  }
}

int main(void) {
  int n, t;
  if (scanf("%d", &n) != 1) return 0;
  for (int i = 0; i < n; i++) { scanf("%d", &t); enqueue(t, i); }
  printf("Queue:");
  for (int i = front; i <= rear; i++) printf("%s%d", i > front ? " " : "", q[i]);
  printf("\n");
  reverse();
  printf("Reversed Queue:");
  for (int i = front; i <= rear; i++) printf("%s%d", i > front ? " " : "", q[i]);
  printf("\n");
  return 0;
}
