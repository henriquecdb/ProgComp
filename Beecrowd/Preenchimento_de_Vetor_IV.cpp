#include <iostream>
using namespace std;

int main() 
{
    int par[5], impar[5], x, p=0, i=0;

    for (int j = 0; j < 15; j++) {
        cin >> x;
        if (x % 2 == 0) {
            par[p] = x;
            p++;
        } else {
            impar[i] = x;
            i++;
        }
        if (p == 5) {
            p = 0;
            for(int k = 0; k < 5; k++)
                cout << "par[" << k << "] = " << par[k] << endl;
        }
        if (i == 5) {
            i = 0;
            for(int k = 0; k < 5; k++)
                cout << "impar[" << k << "] = " << impar[k] << endl;
        }
    }

    for (int k = 0; k < i; k++)
        cout << "impar[" << k << "] = " << impar[k] << endl;

    for (int k = 0; k < p; k++)
        cout << "par[" << k << "] = " << par[k] << endl;

    return 0;
}
