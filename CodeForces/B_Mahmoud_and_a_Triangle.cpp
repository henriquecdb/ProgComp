#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

bool isTrianglePossible(int arr[], int N);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int a[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << (isTrianglePossible(a, n) ? "YES" : "NO") << endl;
    return 0;
}

bool isTrianglePossible(int arr[], int N) {
    if (N < 3) return false;
    sort(arr, arr + N);
    for (int i = 0; i < N - 2; i++)
       if (arr[i] + arr[i + 1] > arr[i + 2])
          return true;
    return false;
}
