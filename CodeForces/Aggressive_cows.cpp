#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

bool check(int mid, int x[], int n, int c){
    int cows = 1, pos = x[0];
    for (int i = 1; i < n; i++) {
        if (x[i] - pos >= mid) {
            pos = x[i];
            cows++;
            if (cows == c)
                return true;
        }
    }
    return false;
}

int solve(int x[], int n, int c){
    sort(x, x+n);
    int start = 0, end = x[n-1] - x[0], ans = 0;
    while (end > start) {
        int mid = (start + end)/2;
        if (check(mid, x, n, c)) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, c;
        cin >> n >> c;
        int x[n];
        for(int i=0; i<n; i++)
            cin >> x[i];
        cout << solve(x, n, c) << endl;
    }
    return 0;
}