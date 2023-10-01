#include <iostream>
#include <vector>

using namespace std;

vector<int> generateLuckyNumbers(int limit);

int main() 
{
    int n;
    cin >> n;
    vector<int> luckyNumbers = generateLuckyNumbers(n);
    for (int i = 0; i < luckyNumbers.size(); i++) {
        if (n % luckyNumbers[i] == 0) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}

vector<int> generateLuckyNumbers(int limit) {
    vector<int> luckyNumbers;
    for (int i = 4; i <= limit; i++) {
        int num = i;
        bool isLucky = true;
        while (num > 0) {
            int digit = num % 10;
            if (digit != 4 && digit != 7) {
                isLucky = false;
                break;
            }
            num /= 10;
        }
        if (isLucky) {
            luckyNumbers.push_back(i);
        }
    }
    return luckyNumbers;
}
