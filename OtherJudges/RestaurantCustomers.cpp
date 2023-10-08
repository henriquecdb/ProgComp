#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
  int n; cin >> n;
  vector<pair<int,int>> v;
  for (int i = 0; i < n; i++) {
    int a, b; cin >> a >> b;
    v.push_back(make_pair(a,1));
    v.push_back(make_pair(b, -1));
  }
  sort(v.begin(), v.end());
  int clients = 0;
  int peek = 0;
  for (auto x : v) {
    clients += x.second;
    peek = max(peek, clients);
  }
  cout << peek << endl;
  return 0;
}

