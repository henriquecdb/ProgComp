#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(ll n);

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n; cin >> n;
	solve(n);
	return 0;
}

void solve(ll n) {
	cout << n << ' ';
	while (n != 1) {
		if (n % 2 == 0) n /= 2;
		else {
			n *= 3;
			n += 1;
		}
		cout << n << ' ';
	}
	cout << endl;
}

