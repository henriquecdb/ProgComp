#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

struct Team {
    int id, g, s, b;
};

bool cmp(Team a, Team b) {
    if (a.g != b.g)
        return a.g > b.g;
    if (a.s != b.s)
        return a.s > b.s;
    if (a.b != b.b)
        return a.b > b.b;
    return a.id < b.id;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    vector<Team> teams(n);

    for (int i = 0; i < n; i++) {
        teams[i] = {i + 1, 0, 0, 0};
    }

    int o, p, b;
    for (int i = 0; i < m; i++) {
        cin >> o >> p >> b;
        teams[o-1].g++;
        teams[p-1].s++;
        teams[b-1].b++;
    }
    sort(teams.begin(), teams.end(), cmp);

    for (int i = 0; i < n; i++)
        cout << teams[i].id << ' ';
    return 0;
}
