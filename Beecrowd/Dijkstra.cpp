#include <bits/stdc++.h>

using namespace std;

int main()
{
    string joia;
    set<string> tesouro;
    while (cin >> joia) {
        tesouro.insert(joia);
    }
    cout << tesouro.size() << endl;
    return 0;
}
