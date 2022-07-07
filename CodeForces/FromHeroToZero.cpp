#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long n, k;
  int t; cin >> t;
  for (int i = 0; i < t; ++i){
    	cin >> n >> k;
    	long long resp = 0;
    	while (n > 0) {
    	    if (n % k == 0) {
    	        n /= k;
    	        ++resp;
    	    }
    	    else {
    	        long long rem = n % k;
    	        resp += rem;
    	        n -= rem;
    	    }
    	}
    	cout << resp << endl;
    }
  return 0;
}
