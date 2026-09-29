#include <stdio.h>

int pre[105], in[105], post[105], pi;

void build(int preL, int inL, int len) {
  if (len <= 0) return;
  int root = pre[preL], k = 0;
  while (k < len && in[inL + k] != root) k++;
  build(preL + 1, inL, k);
  build(preL + 1 + k, inL + k + 1, len - k - 1);
  post[pi++] = root;
}

int main(void) {
  int n;
  if (scanf("%d", &n) != 1) return 0;
  int i;
  for(i=1;i<=n;i++) scanf("%d", &pre[i - 1]);
  for(i=1;i<=n;i++) scanf("%d", &in[i - 1]);
  pi = 0;
  build(0, 0, n);
  for (i = 0; i < n; i++) printf("%s%d", i ? " " : "", post[i]);
  printf("\n");
  return 0;
}
