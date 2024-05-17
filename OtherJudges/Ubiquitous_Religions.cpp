#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

void make_set(int v);
int find_set(int v);
void union_sets(int a, int b);

vector<int> parent(50001);
vector<int> ranks(50001);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // setIO("Ubiquitous_Religions");    
    int n, m, cases = 0;
    while (cin >> n >> m) {
        cases++;
        if (n == 0 and m == 0) break;

        for (int i = 1; i < 50001; i++) {
            make_set(i);
        }

        for (int x = 1; x <= m; x++) {
            int i, j; cin >> i >> j;
            union_sets(i, j);
        }
        int resp = 0;
        for (int i = 1; i <= n; ++i) {
            if (find_set(i) == i)
                resp++;
        }
        cout << "Case " << cases << ": " << resp << endl;
        resp = 0;
    }
    return 0;
}

void make_set(int v) {
    parent[v] = v;
    ranks[v] = 1;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (ranks[a] < ranks[b])
            swap(a, b);
        parent[b] = a;
        if (ranks[a] == ranks[b])
            ranks[a]++;
    }
}