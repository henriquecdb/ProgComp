#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int parent[100100];

void make_set(int v) {
    parent[v] = v;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // setIO("fusoes");
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i++)
        parent[i] = i;
    char op;
    int banco1, banco2;
    for (int i = 0; i < k; i++) {
        cin >> op >> banco1 >> banco2;
        if (op == 'F') union_sets(banco1, banco2);
        else 
            cout << (find_set(banco1) == find_set(banco2) ? "S" : "N") << endl; 
    }
    return 0;
}