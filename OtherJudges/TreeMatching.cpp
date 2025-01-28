#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int MAXN = 2e5 + 5;

vector<int> adj[MAXN];
int dp[MAXN][2];

void dfs(int u, int parent) {
  dp[u][0] = 0;
  dp[u][1] = 0;
  for (int v : adj[u]) {
    if (v != parent) {
      dfs(v, u);
      dp[u][0] += max(dp[v][0], dp[v][1]);
    }
  }
  for (int v : adj[u]) {
    if (v != parent) {
      dp[u][1] =
          max(dp[u][1], dp[u][0] - max(dp[v][0], dp[v][1]) + dp[v][0] + 1);
    }
  }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for (int i = 1; i < n; ++i) {
      int a, b; cin >> a >> b;
      adj[a].push_back(b);
      adj[b].push_back(a);
    }
    dfs(1, -1);
    cout << max(dp[1][0], dp[1][1]) << endl;
    return 0;
}
