#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(int mid, vector<int>& sandwiches, int N) {
    int count = 0;
    for (int i = 0; i < sandwiches.size(); i++) {
        count += sandwiches[i] / mid;
    }
    return count >= N;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> sandwiches(K);
    for (int i = 0; i < K; i++) {
        cin >> sandwiches[i];
    }

    int left = 1, right = 10000;
    while (left < right) {
        int mid = left + (right - left + 1) / 2;
        if (check(mid, sandwiches, N)) {
            left = mid;
        } else {
            right = mid - 1;
        }
    }

    cout << left << endl;

    return 0;
}
