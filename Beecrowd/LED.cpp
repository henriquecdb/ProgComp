#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int n;
  cin >> n;
  int arr[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
  for (int i = 0; i < n; i++) {
    int resp = 0;
    string s;
    cin >> s;
    for (int j = 0; j < s.size(); j++) {
      int aux = (int)s[j] - '0';
      resp += arr[aux];
    }
    cout << resp << " leds" << endl;
  }
  return 0;
}
