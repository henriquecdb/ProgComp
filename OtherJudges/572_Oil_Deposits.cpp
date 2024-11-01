#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int directions[8][2] = {
    {0, 1}, {1, 0}, {0, -1}, {-1, 0},
    {1, 1}, {1, -1}, {-1, 1}, {-1, -1}
};

void dfs(int x, int y, vector<vector<char>>& grid, vector<vector<bool>>& visited, int m, int n) {
    stack<pair<int, int>> s;
    s.push({x, y});
    
    while (!s.empty()) {
        auto [cur_x, cur_y] = s.top();
        s.pop();
        
        for (const auto& dir : directions) {
            int new_x = cur_x + dir[0];
            int new_y = cur_y + dir[1];
            
            if (new_x >= 0 && new_x < m && new_y >= 0 && new_y < n &&
                grid[new_x][new_y] == '@' && !visited[new_x][new_y]) {
                visited[new_x][new_y] = true;
                s.push({new_x, new_y});
            }
        }
    }
}

int countOilDeposits(vector<vector<char>>& grid, int m, int n) {
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    int count = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == '@' && !visited[i][j]) {
                // Found an unvisited oil pocket, start DFS
                visited[i][j] = true;
                dfs(i, j, grid, visited, m, n);
                count++; // Increment the deposit count
            }
        }
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m, n;
    
    while (true) {
        cin >> m >> n;
        if (m == 0) break;
        
        vector<vector<char>> grid(m, vector<char>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> grid[i][j];
            }
        }
        
        int result = countOilDeposits(grid, m, n);
        cout << result << endl;
    }
    return 0;
}
