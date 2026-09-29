#include <stdio.h>

#define CAP 5
int arr[CAP];
int top1 = -1, top2 = CAP;

void push1(int x) { if (top1 + 1 < top2) arr[++top1] = x; }
void push2(int x) { if (top2 - 1 > top1) arr[--top2] = x; }
int pop1(void) { return (top1 >= 0) ? arr[top1--] : -1; }
int pop2(void) { return (top2 < CAP) ? arr[top2++] : -1; }

int main(void) {
  int x, i = 0;
  while (i < CAP && scanf("%d", &x) == 1) {
    if (i % 2 == 0) push1(x); else push2(x);
    i++;
  }
  printf("Popped element from stack1 is:%d\n", pop1());
  printf("Popped element from stack2 is:%d\n", pop2());
  return 0;
}
