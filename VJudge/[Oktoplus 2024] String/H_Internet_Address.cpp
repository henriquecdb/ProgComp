/*
    2 atempts (1 WA, 1 TLE)
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
    // setIO("H_Internet_Address");
    string s; getline(cin, s);
    string protocol, domain, context;
    if (s.substr(0, 3) == "ftp") {
        protocol = "ftp";
        s = s.substr(3);
    } else {
        protocol = "http";
        s = s.substr(4);
    }
    int pos = s.rfind("ru");
    while (s.rfind("ru", pos - 1) != string::npos && pos != string::npos) {
        pos = s.rfind("ru", pos - 1);
    }
    domain = s.substr(0, pos);
    context = s.substr(pos + 2);
    cout << protocol << "://" << domain << ".ru";
    if (!context.empty()) {
        cout << "/" << context;
    }
    cout << endl;
    return 0;
}