#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
bool solve(int a[], string s, int n); 

int main()
{
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        int a[n] = {0};
        for (int j = 0; j < n; j++)
            cin >> a[i];
        string s; cin >> s;
        cout << (solve(a, s, n) ? "YES" : "NO") << endl; 
    }
    return 0;
}

bool solve(int a[], string s, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
        }
    }    
    cout << s << endl;
    return true;
}   
 