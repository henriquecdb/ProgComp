// Problema exemplo
// Dfs em mapa de # e .
// Contar quantas salas existem
#include <bits/stdc++.h>

using namespace std;

void explore(vector<vector<char>> &map, vector<vector<bool>> &visited, int row, int col, int n, int m) {
  if (row < 0 || row >= n || col < 0 || col >= m || visited[row][col] || map[row][col] == '#')
    return;

  visited[row][col] = true;

  explore(map, visited, row - 1, col, n, m); // Célula acima
  explore(map, visited, row + 1, col, n, m); // Célula abaixo
  explore(map, visited, row, col - 1, n, m); // Célula à esquerda
  explore(map, visited, row, col + 1, n, m); // Célula à direita
}

int main()
{
  int n, m;
  cin >> n >> m;

  vector<vector<char>> map(n, vector<char>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> map[i][j];
    }
  }

  vector<vector<bool>> visited(n, vector<bool>(m, false));

  int roomCount = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (map[i][j] == '.' && !visited[i][j]) {
        roomCount++;
        explore(map, visited, i, j, n, m);
      }
    }
  }

  cout << roomCount << endl;

  return 0;
}
