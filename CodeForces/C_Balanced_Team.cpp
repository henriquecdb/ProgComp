#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int resp = 1, sum = 1;
    for (int i = 0, j = 1; j < n && i < n && i <= j;){
        if (a[j] - a[i] <= 5) 
            sum++, j++;
        else if (a[j] - a[i] > 5) 
            i++, sum--;
        resp = max(sum, resp);
    }
    cout << resp << endl;
    return 0;
}
