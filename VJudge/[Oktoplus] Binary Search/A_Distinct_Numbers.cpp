#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
 
void solve(set<int> s);
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int x; set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }
    solve(s);
    return 0;
}
 
void solve(set<int> s) {
    cout << s.size() << endl;
}