#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int MAX = 1e5+10;

vector<bool> vis(MAX);
vector<vector<int>> g(MAX);
vector<int> pai(MAX);

void bfs(int s) {
	queue<int> q;
	q.push(s), vis[s] = 1;
	pai[s] = s;
	while(!q.empty()) {
		int v = q.front(); q.pop();
		for (auto u : g[v]) if(!vis[u]) {
			q.push(u), vis[u] = 1;
			pai[u] = v;
		}
	}
}

vector<int> path(int v) {
	vector<int> ret;
	if (!vis[v]) return ret;
	ret.push_back(v);
	while (pai[v] != v) {
		v = pai[v];
		ret.push_back(v);
	}
	reverse(ret.begin(), ret.end());
	return ret;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m; cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b; a--; b--;
		g[a].push_back(b), g[b].push_back(a);
	}
	bfs(0);
	vector<int> ans = path(n-1);
	if (ans.size() == 0) cout << "IMPOSSIBLE" << endl;
	else {
		cout << ans.size() << endl;
		for (auto u : ans) cout << u+1 << ' ';
		cout << endl;
	}
	return 0;
}
