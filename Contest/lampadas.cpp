#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a; cin >> a;
  switch (a) {
    case 1 ... 9: cout << 40 << endl; break;
    case 10 ... 14: cout << 60 << endl; break;
    case 15 ... 19: cout << 79 << endl; break;
    case 20 ... 24: cout << 97 << endl; break;
    case 25 ... 29: cout << 114 << endl; break;
    case 30 ... 34: cout << 130 << endl; break;
    case 35 ... 39: cout << 145 << endl; break;
    case 40 ... 44: cout << 159 << endl; break;
    case 45 ... 49: cout << 172 << endl; break;
  }
  return 0;
}
