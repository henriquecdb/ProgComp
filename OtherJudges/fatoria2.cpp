#include <iostream>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

ll factorial(int n) {
    return (n < 2 ? 1 : n * factorial(n-1));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
