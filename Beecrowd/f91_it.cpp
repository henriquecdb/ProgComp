#include <iostream>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int f91(int n) {
    if (n >= 101) {
        return n - 10;
    } else {
        return 91;
    }
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        cout << "f91(" << n << ")" << " = " << f91(n) << endl;
    }
    return 0;
}
