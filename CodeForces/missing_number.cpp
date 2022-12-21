#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int solve(vector<int> v, int n);

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n, input, sum = 0;
  cin >> n;
  for (int i = 0 ; i < n - 1 ; i++) {
    cin >> input;
    sum += input;
  }
  cout << ( n * (n + 1) ) / 2 - sum << endl;
	return 0;
}

