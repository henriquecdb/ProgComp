/*
    Wrong answer - 3 atempts (first one was my mistake)
    I have forgotten to comment the setIO line
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // setIO("F_Common_Permutation");
    string a, b;
    while (cin >> a >> b) {
        int count_a[26] = {0}, count_b[26] = {0};
        for (auto x : a)
            count_a[x - 'a']++;
        for (auto x : b)
            count_b[x - 'a']++;
        string resp = "";
        for (char c = 'a'; c <= 'z'; ++c) {
            resp += string(min(count_a[c - 'a'], count_b[c - 'a']), c);
        }
        cout << resp << endl;
    }
    return 0;
}