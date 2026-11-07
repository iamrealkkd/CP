
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    long long x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;

    if (x1 == 0 || y1 == 0) {
      if (x1 == y1)
        cout << "=\n";
      else if (x1 > y1)
        cout << ">\n";
      else
        cout << "<\n";
      continue;
    }

    string a = to_string(x1);
    string b = to_string(y1);

    long long len1 = a.size() + x2;
    long long len2 = b.size() + y2;

    if (len1 > len2) {
      cout << ">\n";
    } else if (len1 < len2) {
      cout << "<\n";
    } else {
      int n = max(a.size(), b.size());

      a.append(n - a.size(), '0');
      b.append(n - b.size(), '0');

      if (a > b)
        cout << ">\n";
      else if (a < b)
        cout << "<\n";
      else
        cout << "=\n";
    }
  }

  return 0;
}
