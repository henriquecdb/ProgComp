/*
    TLE
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

bool isPalindrome(const string& s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}

string solve(const string& s) {
    int n = s.size();
    int maxLength = 1;
    int start = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPalindrome(s, i, j)) {
                if (j - i + 1 > maxLength) {
                    maxLength = j - i + 1;
                    start = i;
                }
            }
        }
    }
    return s.substr(start, maxLength);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    cout << solve(s) << endl;
    return 0;
}
