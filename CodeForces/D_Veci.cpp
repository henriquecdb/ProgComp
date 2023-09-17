#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() 
{
    string X;
    cin >> X;

    if (next_permutation(X.begin(), X.end())) {
        cout << X << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
