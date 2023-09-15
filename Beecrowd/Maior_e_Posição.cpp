#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[100] = {0};
    int max = arr[0];
    int pos = 0;
    for (int i = 0; i < 100; i++) {
        int n; cin >> arr[i];
        if(arr[i] > max) {
            max = arr[i];
            pos = i;
        }
    }
    cout << max << endl << pos + 1 << endl;
    return 0;
}
