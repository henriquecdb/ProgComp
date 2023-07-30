#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>>
      species; // Vetor para armazenar os períodos de cada espécie
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    species.push_back(make_pair(l, r));
  }

  vector<int> years(
      105106, 0); // Vetor para contar quantas espécies existem em cada ano
  for (int i = 0; i < n; i++) {
    for (int j = species[i].first; j <= species[i].second; j++) {
      years[j]++;
    }
  }

  int max_species = *max_element(
      years.begin(),
      years.end()); // Encontrar a maior quantidade de espécies em um único ano

  cout << max_species << endl;

  return 0;
}
