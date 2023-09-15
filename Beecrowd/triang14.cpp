#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int varetas[4];
    for(int i = 0; i < 4; i++)
        cin >> varetas[i];

    sort(varetas, varetas+4);

    if(varetas[0] + varetas[1] > varetas[2] || varetas[1] + varetas[2] > varetas[3])
        cout << 'S' << endl;
    else
        cout << 'N' << endl;

    return 0;
}
