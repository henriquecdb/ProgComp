#include <bits/stdc++.h>
#define MAXID 100001
#define MAXFILA 50000

using namespace std;

int removido[MAXID];
int fila[MAXFILA];
int M, N;

int main(void)
{
  int i, r, primeiro;

  cin >> N;
  for (i = 0; i < N; i++)
    cin >> fila[i];

  cin >> M;
  for (i = 0; i < M; i++) {
    cin >> r;
    removido[r] = 1;
  }

  for (i = 0; i < N; i++) {
    if (removido[fila[i]] == 1)
      continue;
    cout << fila[i] << ' ';
  }
  cout << endl;
  return 0;
}
