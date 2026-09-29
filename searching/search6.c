#include <stdio.h>
#include <limits.h>

void thirdLargest(int arr[], int arr_size) {
  int f = INT_MIN, s = INT_MIN, t = INT_MIN;
  for (int i = 0; i < arr_size; i++) {
    if (arr[i] > f) { t = s; s = f; f = arr[i]; }
    else if (arr[i] > s && arr[i] != f) { t = s; s = arr[i]; }
    else if (arr[i] > t && arr[i] != s && arr[i] != f) t = arr[i];
  }
  printf("The third Largest element is %d\n", t);
}

int main(void) {
  int n;
  if (scanf("%d", &n) != 1) return 0;
  int arr[n];
  for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
  thirdLargest(arr, n);
  return 0;
}
