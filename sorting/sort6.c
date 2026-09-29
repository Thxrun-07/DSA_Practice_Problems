#include <stdio.h>

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) printf("%d%c", arr[i], (i + 1 < n) ? ' ' : '\n');
}

void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int k = arr[i], j = i - 1;
    while (j >= 0 && arr[j] > k) { arr[j + 1] = arr[j]; j--; }
    arr[j + 1] = k;
  }
}

int main(void) {
  int n;
  if (scanf("%d", &n) != 1) return 0;
  int arr[100005];
  for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

  for (int i = 1; i < 3 && i < n; i++) {
    int k = arr[i], j = i - 1;
    while (j >= 0 && arr[j] > k) { arr[j + 1] = arr[j]; j--; }
    arr[j + 1] = k;
  }
  printArray(arr, n);
  insertionSort(arr, n);
  printArray(arr, n);
  return 0;
}
