#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<pair<int, string>> cups;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        if (isdigit(a[0])) {
            cups.push_back(make_pair(stoi(a) / 2, b));
        } else {
            cups.push_back(make_pair(stoi(b), a));
        }
    }
    sort(cups.begin(), cups.end());
    for (auto cup : cups) {
        cout << cup.second << endl;
    }
    return 0;
}
