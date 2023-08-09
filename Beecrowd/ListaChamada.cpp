#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<string> aux;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    aux.push_back(s);
  }
  sort(aux.begin(), aux.end());
  cout << aux.at(k - 1) << endl;
  return 0;
}
