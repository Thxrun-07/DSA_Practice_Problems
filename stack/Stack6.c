#include <stdio.h>

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) printf("%d%c", arr[i], (i + 1 < n) ? ' ' : '\n');
}

void calculateSpan(int price[], int n, int S[]) {
  int st[1000], top = -1;
  for (int i = 0; i < n; i++) {
    while (top >= 0 && price[st[top]] <= price[i]) top--;
    S[i] = (top < 0) ? i + 1 : i - st[top];
    st[++top] = i;
  }
}

int main(void) {
  int n;
  if (scanf("%d", &n) != 1) return 0;
  int price[n], S[n];
  for (int i = 0; i < n; i++) scanf("%d", &price[i]);
  calculateSpan(price, n, S);
  printArray(S, n);
  return 0;
}
