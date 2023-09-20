#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string &a, const string &b) {
    if (a.size() != b.size())
        return a.size() > b.size();
    return false;
}

int main() {
    int N;
    cin >> N;
    while (N--) {
        vector<string> palavras;
        string palavra;
        while (cin >> palavra) {
            palavras.push_back(palavra);
            if (cin.get() == '\n')
                break;
        }
        stable_sort(palavras.begin(), palavras.end(), compare);
        for (int i = 0; i < palavras.size(); i++) {
            if (i != 0)
                cout << " ";
            cout << palavras[i];
        }
        cout << endl;
    }
    return 0;
}
