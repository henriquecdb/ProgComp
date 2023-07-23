#include <iostream>
#include <vector>
using namespace std;

struct Response {
  int words;
  int quality;
};

int findWinner(const vector<Response> &responses) {
  int maxQuality = 0;
  int winnerIndex = -1;

  for (int i = 0; i < responses.size(); i++) {
    if (responses[i].words <= 10 && responses[i].quality > maxQuality) {
      maxQuality = responses[i].quality;
      winnerIndex = i;
    }
  }

  return winnerIndex;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<Response> responses(n);

    for (int i = 0; i < n; i++) {
      cin >> responses[i].words >> responses[i].quality;
    }

    int winnerIndex = findWinner(responses);
    cout << winnerIndex + 1 << endl;
  }

  return 0;
}
