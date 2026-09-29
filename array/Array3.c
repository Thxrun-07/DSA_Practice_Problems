#include <stdio.h>

int main(void) {
  int T;
  if (scanf("%d", &T) != 1) return 0;
  while (T--) {
    int n;
    if (scanf("%d", &n) != 1) break;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int found = 0, i = 1;
    while (i < n) {
       if(arr[i]>arr[i-1]) {
         int buy = i - 1;
         while (i < n && arr[i] >= arr[i - 1]) i++;
         printf("(%d %d)", buy, i - 1);
         found = 1;
       } else i++;
    }
    if (!found) printf("No Profit");
    printf("\n");
  }
  return 0;
}
