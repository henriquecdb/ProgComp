#include <iostream>
#include <map>
#include <sstream>
#include <string>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int M, N;
    cin >> M >> N;

    // Criar o dicionário para armazenar as traduções
    map<string, string> dictionary;

    // Ler o dicionário
    string japWord, ptWord;
    cin.ignore(); // Para ignorar a quebra de linha após M e N
    for (int i = 0; i < M; i++) {
      getline(cin, japWord);
      getline(cin, ptWord);
      dictionary[japWord] = ptWord;
    }

    // Ler e traduzir a letra da música
    for (int i = 0; i < N; i++) {
      string line, word;
      getline(cin, line);

      // Usando stringstream para separar as palavras da linha
      stringstream ss(line);
      bool firstWord = true;

      while (ss >> word) {
        // Verificar se a palavra está no dicionário
        if (dictionary.count(word) > 0) {
          cout << (firstWord ? "" : " ") << dictionary[word];
        } else {
          cout << (firstWord ? "" : " ") << word;
        }
        firstWord = false;
      }

      cout << endl;
    }

    // Linha em branco após a tradução da instância
    cout << endl;
  }

  return 0;
}
