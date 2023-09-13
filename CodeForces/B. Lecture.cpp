#include <iostream>
#include <map>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  map<string, string> dict;
  for (int i = 0; i < m; i++) {
    string a, b;
    cin >> a >> b;
    dict.insert(make_pair(a, b));
  }
  for (int i = 0; i < n; i++) {
    string c;
    cin >> c;
    if (dict.find(c) != dict.end())
      cout << (dict[c].size() < c.size() ? dict[c] : c) << endl;
  }
  return 0;
}
