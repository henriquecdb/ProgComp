#include <iostream>
#include <queue>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() 
{
    ll N, K;
    while (cin >> N >> K and (N || K)) {
        priority_queue<ll> pq;
        pq.push(N);
        int count = 0;
        while (!pq.empty() and pq.top() > K) {
            ll top = pq.top();
            pq.pop();
            ll a = top / 2;
            ll b = top - a;
            pq.push(a);
            pq.push(b);
        }
        cout << pq.size() << endl;
    }
    return 0;
}
