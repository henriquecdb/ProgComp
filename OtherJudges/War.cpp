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

void make_set(int v);
int find_set(int v);
void union_sets(int a, int b);

vector<int> parent(10000);
vector<int> enemy(10000);

bool areFriends(int x, int y) {
    return find_set(x) == find_set(y);
}

bool areEnemies(int x, int y) {
    return enemy[find_set(x)] == y || enemy[find_set(y)] == x;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // setIO("War");
    int n; cin >> n;
    int c, x, y;

    for (int i = 0; i < n; i++)
        make_set(i);

    while (cin >> c >> x >> y) {
        if (c == 0 and x == 0 and y == 0) break;
        if (c == 1) {
            if (areEnemies(x, y)) {
                cout << -1 << endl;
                continue;
            }
            union_sets(x, y);
        } else if (c == 2) {
            if (areFriends(x, y)) {
                cout << -1 << endl;
                continue;
            }
            enemy[find_set(x)] = find_set(y);
            enemy[find_set(y)] = find_set(x);
        } else if (c == 3) {
            cout << areFriends(x, y) << endl;
        } else if (c == 4) {
            cout << areEnemies(x, y) << endl;
        }
    }
    return 0;
}

void make_set(int v) {
    parent[v] = v;
    enemy[v] = -1;
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