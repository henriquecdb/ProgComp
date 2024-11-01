#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

struct Tree {
    int x, y;
};

bool solve(int N, int D, const vector<Tree>& trees) {
    vector<vector<int>> adj(N);
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            double distance = sqrt(pow(trees[i].x - trees[j].x, 2) + pow(trees[i].y - trees[j].y, 2));
            if (distance <= D) {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }

    vector<bool> visited(N, false);
    queue<int> q;
    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        for (int neighbor : adj[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    for (bool v : visited) {
        if (!v) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, d;
    cin >> n >> d;
    vector<Tree> trees(n);
    for (int i = 0; i < n; i++) {
        cin >> trees[i].x >> trees[i].y;
    }

    cout << (solve(n, d, trees) ? 'S' : 'N') << endl;
    return 0;
}
