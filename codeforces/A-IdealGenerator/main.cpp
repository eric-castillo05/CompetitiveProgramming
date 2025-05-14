#include <bits/stdc++.h>

const char ln = '\n';

using namespace std;
typedef long long int lli;
void _solve() {
  lli t;
  cin >> t;
  while (t--) {
    lli n;
    cin >> n;
    if (n % 2 != 0) {
      cout << "YES" << ln;
    } else {
      cout << "NO" << ln;
    }
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  _solve();
  return 0;
}
