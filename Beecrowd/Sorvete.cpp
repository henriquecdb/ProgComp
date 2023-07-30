#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Sorveteiro {
  int start, end;
};

int main() {
  int P, S;
  cin >> P >> S;

  vector<int> beach(P + 1, 0); // Vetor da praia, inicializado com 0
  vector<Sorveteiro> sorveteiros(S);

  // Ler os dados dos sorveteiros
  for (int i = 0; i < S; i++) {
    cin >> sorveteiros[i].start >> sorveteiros[i].end;
    // Marcar os intervalos dos sorveteiros na praia
    for (int j = sorveteiros[i].start; j < sorveteiros[i].end; j++) {
      beach[j] = 1;
    }
  }

  // Encontrar os intervalos contínuos onde pelo menos um sorveteiro passou
  int start = -1;
  for (int i = 0; i <= P; i++) {
    if (beach[i] == 1) {
      if (start == -1) {
        start = i;
      }
    } else {
      if (start != -1) {
        cout << start << " " << i << endl;
        start = -1;
      }
    }
  }

  return 0;
}
