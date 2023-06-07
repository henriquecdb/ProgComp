#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

bool cmp(int a, int b) { return a > b; }

int main() {
  int n;
  cin >> n;
  while (n--) {
    int m;
    cin >> m;
    int p[m] = {0};
    int aux[m] = {0};
    for (int i = 0; i < m; i++) {
      cin >> p[i];
      aux[i] = p[i];
    }
    int resp = 0;
    sort(p, p + m, cmp);
    for (int i = 0; i < m; i++) {
      if (p[i] == aux[i])
        resp++;
    }
    cout << resp << endl;
  }
  return 0;
}
