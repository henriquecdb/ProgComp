#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  string s;
  getline(cin >> ws, s);
  int a = 0, b = 0;
  for (int i = 1; i < s.size(); i += 2) {
    if (s[i - 1] == 'A')
      a += s[i];
    else
      b += s[i];
  }
  cout << (a > b ? 'A' : 'B') << endl;
  return 0;
}
