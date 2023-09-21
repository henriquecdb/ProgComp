// presentation error (100%)
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

struct Team {
    int id, points, scored, received;
};

bool cmp(Team a, Team b) {
    if (a.points != b.points)
        return a.points > b.points;
    if (a.scored * b.received != b.scored * a.received)
        return a.scored * b.received > b.scored * a.received;
    if (a.scored != b.scored)
        return a.scored > b.scored;
    return a.id < b.id;
}

int main() 
{
    int n, x, y, z, w, instance = 1;
    bool isLastInstance = false;
    while (cin >> n && n) {
        if (isLastInstance) cout << endl << endl; // print an empty line between test cases
        vector<Team> teams(n);
        for (int i = 0; i < n; i++) {
            teams[i].id = i + 1;
            teams[i].points = teams[i].scored = teams[i].received = 0;
        }
        for (int i = 0; i < n * (n - 1) / 2; i++) {
            cin >> x >> y >> z >> w;
            teams[x - 1].scored += y;
            teams[x - 1].received += w;
            teams[z - 1].scored += w;
            teams[z - 1].received += y;
            if (y > w) {
                teams[x - 1].points += 2;
                teams[z - 1].points++;
            } else {
                teams[z - 1].points += 2;
                teams[x - 1].points++;
            }
        }
        sort(teams.begin(), teams.end(), cmp);
        cout << "Instancia " << instance++ << endl;
        for (int i = 0; i < n; i++) {
            if (i) cout << " ";
            cout << teams[i].id;
        }
        isLastInstance = true;
    }
    return 0;
}
