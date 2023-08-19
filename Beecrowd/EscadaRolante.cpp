#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int n;
  cin >> n;
  int fim = 0;
  int time = 0;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    if (t >= fim)
      time += 10;
    else
      time += t + 10 - fim;
    fim = t + 10;
  }
  cout << time << endl;
  return 0;
}
