#include <iostream>
#include <iomanip>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    while (n--) {
        double a, b, c;
        cin >> a >> b >> c;
        cout <<  fixed << setprecision(1);
        cout << (a*2 + b*3 + c*5)/10 << endl;
    }
    return 0;
}

