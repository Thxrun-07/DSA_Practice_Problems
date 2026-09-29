#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int B[100005], G[100005];
int recv[100005];
char beat[1005][1005];

int main(void) {
  int T;
  if (scanf("%d", &T) != 1) return 0;
  while(true) {
    int N;
    if (scanf("%d", &N) != 1) break;
    for (int i = 1; i <= N; i++) scanf("%d", &B[i]);
    for (int i = 1; i <= N; i++) scanf("%d", &G[i]);
    memset(recv, 0, sizeof(int) * (N + 1));
    memset(beat, 0, sizeof(char) * (N + 1) * (N + 1));
    for (int x = 1; x <= N; x++) {
       int y = B[x];
       if (y < 1 || y > N) continue;
       int z = G[y];
       if (z < 1 || z > N || z == x) continue;
       recv[z]++;
       beat[x][z] = 1;
    }
    int mx = 0;
    for (int i = 1; i <= N; i++) if (recv[i] > mx) mx = recv[i];
    long long mut = 0;
    for (int i = 1; i <= N; i++)
       for (int j = i + 1; j <= N; j++)
         if (beat[i][j] && beat[j][i]) mut++;
    printf("%d %lld\n", mx, mut);
    if (--T <= 0) break;
  }
  return 0;
}
