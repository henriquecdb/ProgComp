#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k; cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int aux = arr[k-1];
    sort(arr, arr+n); int resp = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] >= aux && arr[i] > 0) resp++;
    cout << resp << endl;
    return 0;
}
