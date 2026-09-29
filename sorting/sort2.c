#include <stdio.h>

void swap(int *xp, int *yp) { int t = *xp; *xp = *yp; *yp = t; }

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int mi = i;
    for (int j = i + 1; j < n; j++) if (arr[j] < arr[mi]) mi = j;
    if (mi != i) swap(&arr[i], &arr[mi]);
  }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) printf("%d%c", arr[i], (i + 1 < size) ? ' ' : '\n');
}

int main(void) {
  int n;
  if (scanf("%d", &n) != 1) return 0;
  int arr[n];
  for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
  selectionSort(arr, n);
  printArray(arr, n);
  return 0;
}
