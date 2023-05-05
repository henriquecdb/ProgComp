#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

vector<int> id, sz;

int find(int x) { return id[x] = (id[x] == x ? x : find(id[x])); }

void uni(int x, int y) {
  x = find(x), y = find(y);
  id[x] = y;
}

int main() {
  int n, m;
  cin >> n >> m;
  id = vector<int>(n + 2);
  sz = vector<int>(n + 2, 1);
  iota(id.begin(), id.end(), 0);
  while (m--) {
    char c;
    cin >> c;
    int x;
    cin >> x;
    if (c == '-')
      uni(x, x + 1);
    else
      cout << (find(x) == n + 1 ? -1 : find(x)) << endl;
  }
  return 0;
}
