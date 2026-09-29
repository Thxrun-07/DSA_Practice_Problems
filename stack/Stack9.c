#include <stdio.h>

int q[100000], head = 0, tail = 0;
void qpush(int v) { q[tail++] = v; }
int qpop(void) { return q[head++]; }
int qsize(void) { return tail - head; }

void push(int val) {
  int s = qsize();
  qpush(val);
  for (int i = 0; i < s; i++) qpush(qpop());
}
int pop(void) { return qpop(); }
int top(void) { return q[head]; }

int main(void) {
  int n, m;
  if (scanf("%d %d", &n, &m) != 2) return 0;
  int x;
  for (int i = 0; i < n; i++) { scanf("%d", &x); push(x); }
  printf("top of element %d\n", top());
  for (int i = 0; i < m; i++) pop();
  printf("top of element %d\n", top());
  return 0;
}
