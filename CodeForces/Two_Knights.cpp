#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
void solve(ll n);
 
int main()
{
	ll n; cin >> n;
	solve(n);
	return 0;
}
 
void solve(ll n) {
	cout << 0 << endl;
	for (ll i = 2; i <= n; i++) {
		cout << (i * i * (i * i - 1) / 2) - 4 * (i - 2) * (i - 1) << endl;
	}
}
 