#include <stdio.h>

int h[1000005];
int hn;

void heapify(int arr[], int n, int i) {
  int l = 2 * i + 1, r = 2 * i + 2, big = i;
  if (l < n && arr[l] > arr[big]) big = l;
  if (r < n && arr[r] > arr[big]) big = r;
  if (big != i) { int t = arr[i]; arr[i] = arr[big]; arr[big] = t; heapify(arr, n, big); }
}

void push(int v) {
  h[hn++] = v;
  int i = hn - 1;
  while (i > 0) {
    int p = (i - 1) / 2;
    if (h[p] >= h[i]) break;
    int t = h[p]; h[p] = h[i]; h[i] = t; i = p;
  }
}

int popmax(void) {
  int top = h[0];
  h[0] = h[--hn];
  heapify(h, hn, 0);
  return top;
}

int main(void) {
  int M, N;
  if (scanf("%d %d", &M, &N) != 2) return 0;
  for (int i = 0; i < M; i++) { int x; scanf("%d", &x); push(x); }
  long long rev = 0;
  for (int i = 0; i < N; i++) {
    int k = popmax();
    rev += k;
    if (k - 1 > 0) push(k - 1);
  }
  printf("%lld\n", rev);
  return 0;
}
