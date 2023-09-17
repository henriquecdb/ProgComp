#include <iostream>
#include <string>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() 
{
    int N;
    string S;
    cin >> N >> S;

    char last = S[0];
    for (int i = 1; i < N; i++) {
        if (S[i] == last) {
            cout << "No" << endl;
            return 0;
        }
        last = S[i];
    }
    cout << "Yes" << endl;
    return 0;
}
