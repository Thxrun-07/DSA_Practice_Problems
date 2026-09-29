#include <stdio.h>
#include <stdlib.h>

struct Flat { int x; int y; int h; int d; };

int cmp_flat(const void *a, const void *b) {
  const struct Flat *f1 = (const struct Flat *)a;
  const struct Flat *f2 = (const struct Flat *)b;
  return (f1->d - f2->d);
}

int main(void) {
  int t;
  if (scanf("%d", &t) != 1) return 0;
  while (t-- > 0) {
    int n;
    scanf("%d", &n);
    struct Flat flats[2005];
    int total_h = 0;
    for (int i = 0; i < n; i++) {
       scanf("%d %d %d", &flats[i].x, &flats[i].y, &flats[i].h);
       flats[i].d = flats[i].y - flats[i].x;
       total_h += flats[i].h;
    }
    if (total_h % 2 != 0) { printf("NO\n"); continue; }
    qsort(flats, n, sizeof(struct Flat), cmp_flat);
    int target = total_h / 2;
    int l = 0, r = n - 1;
    int found = 0;
    int cur_sum = 0;
    long long prefsum[2005];
    int nb = 0;
    for (int i = 0; i < n; i++) {
       cur_sum += flats[i].h;
       if (i < n - 1 && flats[i].d != flats[i + 1].d) {
         if (cur_sum == target) { found = 1; break; }
         prefsum[nb++] = cur_sum;
       }
    }
    l = 0; r = nb - 1;
    while (l <= r) {
       int mid = (l + r) / 2;
       if (prefsum[mid] == target) { found = 1; break; }
       else if (prefsum[mid] < target) l = mid + 1;
       else r = mid - 1;
    }
    printf("%s\n", found ? "YES" : "NO");
  }
  return 0;
}
