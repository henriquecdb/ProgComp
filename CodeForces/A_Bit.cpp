#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int solve(string a);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int resp = 0;
    for (int i = 0; i < n; i++) {
      string a;
      cin >> a;
      resp += solve(a);
    }
    cout << resp << endl;
    return 0;
}

int solve(string a) {
  int plus_count = 0, minus_count = 0;
  for (int i = 0; i < a.length(); i++) {
    if (a[i] == '+') plus_count++;
    else if (a[i] == '-') minus_count++;
  }
  if (plus_count % 2 == 0 && minus_count % 2 == 0) 
    return plus_count/2 - minus_count/2;
}

