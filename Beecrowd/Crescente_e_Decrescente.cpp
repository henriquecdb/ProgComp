#include <iostream>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (true) {
        int x, y;
        cin >> x >> y;
        if (x == y) break;
        if (x < y) 
            cout << "Crescente" << endl;
        else
            cout << "Decrescente" << endl;
    }
    return 0;
}
