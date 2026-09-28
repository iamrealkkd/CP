#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> factors;

  for (int i = 1; i * i <= n; i++) {

    if (n % i == 0) {

      factors.push_back(i);

      if (i != n / i) {
        factors.push_back(n / i);
      }
    }
  }

  sort(factors.begin(), factors.end());

  for (int factor : factors) {
    cout << factor << " ";
  }

  return 0;
}