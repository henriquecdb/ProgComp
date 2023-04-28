#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    string s;
    getline(cin >> ws, s);
    int a = s[0] - 'a';
    int b = s[1] - 'a';
    int ans = a * 25 + b;
    if (s[1] < s[0])
      ans += 1;
    cout << ans << endl;
  }
  return 0;
}
