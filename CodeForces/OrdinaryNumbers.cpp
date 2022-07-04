#include <bits/stdc++.h>

using namespace std;

void TestingOrdinary();

int main()
{
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        TestingOrdinary();
    }
    return 0;
}

void TestingOrdinary() {
    long long n, count = 0, start;
    cin >> n;
    for (int i = 1; i <= 9; i++) {
    	start = i;
    	while (start <= n) {
    		count++;
    		start=start*10+i;
		}
	}
	cout << count << endl;
}

