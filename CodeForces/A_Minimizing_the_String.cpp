#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(string s, int n);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    string s; cin >> s;
    solve(s, n);
    return 0;
}

void solve(string s, int n) {
    int pos = n - 1;
	for (int i = 0; i < n - 1; ++i) {
		if (s[i] > s[i + 1]) {
			pos = i;
			break;
		}
	}
	cout << s.substr(0, pos) + s.substr(pos + 1) << endl;
}
