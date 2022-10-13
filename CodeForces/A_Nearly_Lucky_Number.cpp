#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
bool solve(string n);

int main()
{
    string n; cin >> n;
    cout << (solve(n) ? "YES" : "NO") << endl;
    return 0;
}

bool solve(string n) {
    int cont = 0;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '4' || n[i] == '7')
            cont++;
    }
    return (cont == 7 || cont == 4);
}
 