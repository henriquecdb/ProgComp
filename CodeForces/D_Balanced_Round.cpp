#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int findMaxConsecutive(const vector<int> &difficulties, int k) {
  int maxConsecutive = 1;
  int consecutive = 1;

  for (int i = 1; i < difficulties.size(); ++i) {
    int diff = difficulties[i] - difficulties[i - 1];
    if (diff <= k) {
      ++consecutive;
    } else {
      consecutive = 1;
    }
    maxConsecutive = max(maxConsecutive, consecutive);
  }

  return maxConsecutive;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    vector<int> difficulties(n);
    for (int i = 0; i < n; ++i) {
      cin >> difficulties[i];
    }

    // Sort the array of difficulties in ascending order
    sort(difficulties.begin(), difficulties.end());

    int maxConsecutive = findMaxConsecutive(difficulties, k);
    int minToRemove = n - maxConsecutive;

    cout << minToRemove << endl;
  }

  return 0;
}
