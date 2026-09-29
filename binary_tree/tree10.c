#include <stdio.h>

int tree[4 * 200005];
int A[200005];

void build(int k, int l, int r) {
  if (l == r) { tree[k] = 1; return; }
  int m = (l + r) / 2;
  build(2 * k, l, m);
  build(2 * k + 1, m + 1, r);
  tree[k] = tree[2 * k] + tree[2 * k + 1];
}

int kth(int k, int l, int r, int pos) {
  if (l == r) { tree[k] = 0; return l; }
  int m = (l + r) / 2, res;
  if (tree[2 * k] >= pos) res = kth(2 * k, l, m, pos);
  else res = kth(2 * k + 1, m + 1, r, pos - tree[2 * k]);
  tree[k] = tree[2 * k] + tree[2 * k + 1];
  return res;
}

int main(void) {
  int n;
  if (scanf("%d", &n) != 1) return 0;
  for (int i = 1; i <= n; i++) scanf("%d", &A[i]);
  build(1, 1, n);
  for (int i = 1; i <= n; i++) {
    int p; scanf("%d", &p);
    printf("%s%d", i > 1 ? " " : "", A[kth(1, 1, n, p)]);
  }
  printf("\n");
  return 0;
}
