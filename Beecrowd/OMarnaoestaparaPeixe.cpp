#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> sea(101, vector<int>(101, 0));
    int total_area = 0;

    for (int i = 0; i < N; ++i) {
        int Xi, Xf, Yi, Yf;
        cin >> Xi >> Xf >> Yi >> Yf;

        for (int x = Xi; x < Xf; ++x) {
            for (int y = Yi; y < Yf; ++y) {
                if (sea[x][y] == 0) {
                    sea[x][y] = 1;
                    total_area++;
                }
            }
        }
    }

    cout << total_area << endl;

    return 0;
}
