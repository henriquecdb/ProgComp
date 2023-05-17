#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

bool cmp(pair<int,int> a, pair<int, int> b) {
  return a.second < b.second;
}

int main()
{
  int n; cin >> n;
  vector<pair<int,int>> v;
  for (int i = 0; i < n; i++) {
    ll a, b; cin >> a >> b;
    v.push_back(make_pair(a,b));
  }
  sort(v.begin(), v.end(), cmp);
  int last = 0;
  int count = 0;
  for (auto x : v) {
    if (x.first >= last) {
      count++;
      last = x.second;
    }
  }
  cout << count << endl;
  return 0;
}

