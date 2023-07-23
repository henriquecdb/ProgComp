#include <iostream>
#include <vector>
using namespace std;

long long findW(vector<int> &sizes, long long c) {
  int n = sizes.size();

  // Calcula a área total das imagens
  long long totalArea = 0;
  for (int i = 0; i < n; i++) {
    totalArea += sizes[i];
  }

  // Calcula a área do cardboard necessário
  long long cardboardArea = totalArea + c;

  // Calcula o valor de "w"
  long long w = cardboardArea / (2 * n);

  return w;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    long long c;
    cin >> n >> c;

    vector<int> sizes(n);
    for (int i = 0; i < n; i++) {
      cin >> sizes[i];
    }

    long long w = findW(sizes, c);
    cout << w << endl;
  }

  return 0;
}
