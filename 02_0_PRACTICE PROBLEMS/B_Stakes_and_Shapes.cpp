#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int x, y, z;
    cin >> x >> y >> z;

    int total = x + y + z;

    if (x >= y && x >= z) {
      cout << string(total, 'P') << '\n';
    } else if (y >= x && y >= z) {
      cout << string(total, 'R') << '\n';
    } else {
      cout << string(total, 'S') << '\n';
    }
  }

  return 0;
}