/*
    W.A
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

void make_set(string v);
string find_set(string v);
void union_sets(string a, string b);

map<string, string> parent;
map<string, int> ranks;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // setIO("Virtual_Friends");
    int t; cin >> t;
    while (t--) {
        int f; cin >> f;
        for (int i = 0; i < f; i++) {
            string a, b; cin >> a >> b;
            if (parent.find(a) == parent.end())
                make_set(a);
            if (parent.find(b) == parent.end())
                make_set(b);
            union_sets(a, b);
        }
    }
    return 0;
}

void make_set(string v) {
    parent[v] = v;
    ranks[v] = 1;
}

string find_set(string v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(string a, string b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (ranks[a] < ranks[b])
            swap(a, b);
        parent[b] = a;
        ranks[a] += ranks[b];
        cout << ranks[a] << endl;
    }
}