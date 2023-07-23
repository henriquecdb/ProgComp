#include <iostream>
using namespace std;

string findVerticalWord(char grid[8][8]) {
  string word = "";

  for (int col = 0; col < 8; col++) {
    int row = 0;
    while (row < 8 && grid[row][col] == '.') {
      row++;
    }

    if (row < 8) {
      while (row < 8 && grid[row][col] != '.') {
        word += grid[row][col];
        row++;
      }
      break; // Stop after finding the word in a column
    }
  }

  return word;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    char grid[8][8];

    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        cin >> grid[i][j];
      }
    }

    string word = findVerticalWord(grid);
    cout << word << endl;
  }

  return 0;
}
