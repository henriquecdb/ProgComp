#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        int L;
        cin >> L;
        vector<int> vagao(L);
        for (int i = 0; i < L; i++) {
            cin >> vagao[i];
        }
        int S = 0;
        for (int i = 0; i < L; i++) {
            for (int j = 0; j < L - 1; j++) {
                if (vagao[j] > vagao[j + 1]) {
                    swap(vagao[j], vagao[j + 1]);
                    S++;
                }
            }
        }
        cout << "Optimal train swapping takes " << S << " swaps." << endl;
    }
    return 0;
}
