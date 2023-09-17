#include <iostream>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

void s_transform(string& s);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while (getline(cin, s)) {
        s_transform(s);
    }
    return 0;
}

void s_transform(string& s) {
    bool upper = true;
    string result = "";
    for (char ch : s) {
        if (ch == ' ') {
            result += ch;
        } else {
            if (upper) {
                result += toupper(ch);
            } else {
                result += tolower(ch);
            }
            upper = !upper;
        }
    }
    cout << result << endl;
}
