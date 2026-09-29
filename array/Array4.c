#include <stdio.h>

int main(void) {
  int n;
  if (scanf("%d", &n) != 1) return 0;
  int array[n];
  for(int i=0;i<n;i++) scanf("%d", &array[i]);

  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
       if(array[i]>array[j]) { int t = array[i]; array[i] = array[j]; array[j] = t; }

  for (int i = 0; i + 1 < n; i += 2) {
    int t = array[i]; array[i] = array[i + 1]; array[i + 1] = t;
  }
  for (int i = 0; i < n; i++) printf("%d%c", array[i], (i + 1 < n) ? ' ' : '\n');
  return 0;
}
