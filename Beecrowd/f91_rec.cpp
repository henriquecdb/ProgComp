#include <iostream>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int f91(int n) {
    return (n <= 100 ? f91(f91(n + 11)) : n - 10); 
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; 
    while (cin >> n and n != 0) {
        cout << "f91(" << n << ")" << " = " << f91(n) << endl;
    }
    return 0;
}
