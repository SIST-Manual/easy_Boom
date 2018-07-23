#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
const int N = 100005;
int f[N];
int find(int x) { return x == f[x] ? x : f[x] = find(f[x]); }
int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= 100000; i++) f[i] = i;
  for (int i = 1, x, y; i <= n; i++) {
    scanf("%d%d", &x, &y);
    int k1 = find(x), k2 = find(y);
    if (k1 == k2) return printf("%d\n", i), 0;
    f[k2] = k1;
  }
  return puts("no"), 0;
}