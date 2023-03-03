#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void solve(string s);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    solve(s);
    return 0;
}

void solve(string s) {
    int arr[1001];
    int count = 0;
	for (int i = 0; i < s.size(); i++) {
	    if (s[i] == '+') continue; 
        else arr[count++] = s[i] - '0';
	}
	sort(arr, arr + count);
	for (int i = 0; i < count; i++) {
	    cout << arr[i];
	    if (i == count - 1) break;
	    cout << '+';
	}
}
