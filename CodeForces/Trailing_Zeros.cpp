#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    int num_zeros = 0;
    for (long long i = 5; i <= n; i *= 5) {
        num_zeros += n / i;
    }

    cout << num_zeros << endl;

    return 0;
}
