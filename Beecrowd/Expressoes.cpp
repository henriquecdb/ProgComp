#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isWellDefined(const string &expression) {
  stack<char> st;

  for (char c : expression) {
    if (c == '(' || c == '[' || c == '{') {
      st.push(c);
    } else if (c == ')' || c == ']' || c == '}') {
      if (st.empty())
        return false;

      char top = st.top();
      st.pop();

      if ((c == ')' && top != '(') || (c == ']' && top != '[') ||
          (c == '}' && top != '{'))
        return false;
    }
  }

  return st.empty();
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    string expression;
    cin >> expression;

    if (isWellDefined(expression))
      cout << 'S' << endl;
    else
      cout << 'N' << endl;
  }

  return 0;
}
