#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string word;
    cin >> word;

    int uppercaseCount = 0, lowercaseCount = 0;

    for (char c : word) {
        if (isupper(c)) {
            uppercaseCount++;
        } else {
            lowercaseCount++;
        }
    }
    string result;
    if (uppercaseCount > lowercaseCount) {
        for (char c : word) {
            result += toupper(c);
        }
    } else if (lowercaseCount > uppercaseCount) {
        for (char c : word) {
            result += tolower(c);
        }
    } else {
        result = word;
        transform(result.begin(), result.end(), result.begin(), ::tolower);
    }
    cout << result << endl;
    return 0;
}
