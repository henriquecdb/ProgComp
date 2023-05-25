#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
  int n; cin >> n;
  for (int i = 0; i < n; i++) {
    int o; string s;
    cin >> o >> s;
    if (s == "1T") {
      if (o > 45) cout << 45 << '+' << o-45 << endl;
      else cout << o << endl; 
    }
    else {
      int aux = o + 45;
      if (aux > 90) cout << 90 << '+' << aux-90 << endl;
      else if (o == 90) cout << 90 << endl;
      else cout << o + 45 << endl;
    }
  }
  return 0;
}

