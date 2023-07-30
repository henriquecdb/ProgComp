#include <iostream>
#include <map>

using namespace std;

int main() {
  int C, N;
  cin >> C >> N;

  // Mapa para armazenar as versões dos programas instalados
  map<int, int> installedVersions;

  // Ler as versões dos programas instalados
  for (int i = 0; i < C; i++) {
    int P, V;
    cin >> P >> V;
    installedVersions[P] = V;
  }

  // Verificar os programas disponíveis na internet
  for (int i = 0; i < N; i++) {
    int P, V;
    cin >> P >> V;

    // Verificar se o programa precisa ser instalado ou se a versão é mais
    // recente
    if (installedVersions.find(P) == installedVersions.end() ||
        V > installedVersions[P]) {
      cout << P << " " << V << endl;
    }
  }

  return 0;
}

