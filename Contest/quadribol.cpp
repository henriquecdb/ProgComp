#include <bits/stdc++.h>

using namespace std;

int main()
{
  int g1, g2, p, p1, p2;
  cin >> g1 >> g2 >> p;
  p1 = 10*g1; p2 = 10*g2;
  cout << p1 << " x " << p2 << endl << "Ganhador: ";
  if (g1 > g2 || p == 1) cout << "Time1!" << endl;
  else if (g2 > g1 || p == 2) cout << "Time2!" << endl;
  else cout << "Nao houve campeao!" << endl;
  return 0;
}
