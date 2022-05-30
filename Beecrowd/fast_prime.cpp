#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    long long X;
    cin >> N;
    for (int i = 0; i < N; i++)  {
        cin >> X;
        int total = 0;
        if (X == 2) 
            cout << "Prime" << endl;
        else {
            if (X % 2 == 0) {
                cout << "Not Prime" << endl;
            }
            else {
                for (int j = 3; j <= sqrt(X); j += 2) {
                    if (X % j == 0) {
                        total++;
                    }
                }
                if (total >= 1) {
                    cout << "Not Prime" << endl;
                }
                else {
                    cout << "Prime" << endl;
                }
            }
        }
    }
    return 0;
}
