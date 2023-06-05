#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int calls = 0;

int fib(int n) {
  calls++;
  if (n <= 1) {
    return n;
  }
  return fib(n - 1) + fib(n - 2);
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int resultado = fib(n);
    cout << "fib(" << n << ") = " << calls - 1 << " calls = " << resultado
         << endl;
    calls = 0;
  }
  return 0;
}
