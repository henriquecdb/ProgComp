#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve();

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}

void solve() {
    int n; cin >> n;
	set<int> s;
	for (int i = 0; i < n; ++i) {
		int v; cin >> v;
		if (s.count(v)) v++;
		s.insert(v);
	}
    cout << (int)s.size() << endl;
}
