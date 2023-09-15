#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    char O;
    double M[12][12], soma = 0.0;
    cin >> O;
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> M[i][j];
            if(j > i && j > 11 - i) {
                soma += M[i][j];
            }
        }
    }
    if(O == 'M') {
        soma /= ((144 - (2*12))/4);
    }
    cout << fixed << setprecision(1) << soma << endl;
    return 0;
}
