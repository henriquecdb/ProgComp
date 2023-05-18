#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll max_sum = INT_MIN;
    ll current_sum = 0;

    for (int i = 0; i < n; i++) {
      current_sum += arr[i];
      max_sum = max(max_sum, current_sum);
      
      if (current_sum < 0)
        current_sum = 0;
    }

    cout << max_sum << endl;

    return 0;
}
