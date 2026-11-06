
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    stack<int> st;
    vector<bool> used(n, false);

    for (int i = 0; i < n; i++) {

      if (s[i] == '1') {
        st.push(i);
      } else if (s[i] == '2') {

        if (!st.empty()) {
          used[st.top()] = true;
          st.pop();
        } else {
          used[i] = true;
        }
      } else {
        used[i] = true;
      }
    }

    vector<int> ans;

    for (int i = 0; i < n; i++) {
      if (!used[i]) {
        ans.push_back(i + 1);
      }
    }

    cout << ans.size() << '\n';

    for (int x : ans) {
      cout << x << " ";
    }

    cout << '\n';
  }

  return 0;
}
