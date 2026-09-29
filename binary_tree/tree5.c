#include <stdio.h>

int tree[4 * 100005];
int A[100005];

void build(int *aa, int k, int l, int r) {
  if (l == r) { tree[k] = aa[l]; return; }
  int m = (l + r) / 2;
  build(aa, 2 * k, l, m);
  build(aa, 2 * k + 1, m + 1, r);
  tree[k] = tree[2 * k] < tree[2 * k + 1] ? tree[2 * k] : tree[2 * k + 1];
}

int query(int k, int l, int r, int ql, int qr) {
  if (qr < l || r < ql) return 1 << 30;
  if (ql <= l && r <= qr) return tree[k];
  int m = (l + r) / 2;
  int a = query(2 * k, l, m, ql, qr);
  int b = query(2 * k + 1, m + 1, r, ql, qr);
  return a < b ? a : b;
}

int main(void) {
  int n, q;
  if (scanf("%d %d", &n, &q) != 2) return 0;
  for (int i = 1; i <= n; i++) scanf("%d", &A[i]);
  build(A, 1, 1, n);
  while (q--) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", query(1, 1, n, a, b));
  }
  return 0;
}
