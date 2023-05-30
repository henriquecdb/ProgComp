#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int n;
  cin >> n;
  while (n--) {
    string m;
    getline(cin >> ws, m);
    for (int i = 0; i < m.size(); i++) {
      if (m[i] == ' ')
        continue;
      if ((m[i] >= 'A' and m[i] <= 'Z') or (m[i] >= 'a' and m[i] <= 'z'))
        m[i] += 3;
    }
    reverse(m.begin(), m.end());
    for (int i = m.size() / 2; i < m.size(); i++) {
      if (m[i] >= 32 and m[i] <= 176)
        m[i] -= 1;
    }
    cout << m << endl;
  }
  return 0;
}
