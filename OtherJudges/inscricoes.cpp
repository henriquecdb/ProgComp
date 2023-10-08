#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  while (true) {
    int N;
    cin >> N;
    if (N == 0)
      break;

    unordered_map<string, int> mp;
    vector<string> v;

    for (int i = 0; i < N; i++) {
      string a, b;
      cin >> a >> b;

      if (mp.find(b) == mp.end()) {
        v.push_back(b);
        mp[b] = 0;
      }

      mp[b]++;
    }

    for (auto i : v) {
      cout << i << ' ' << mp[i] << endl;
    }
  }

  return 0;
}
