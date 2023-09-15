#include <iostream>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (true) {
        int n; cin >> n;
        if (n == 2002) {
            cout << "Acesso Permitido" << endl;
            break;
        }
        else {
            cout << "Senha Invalida" << endl;
        }
    }
    return 0;
}
