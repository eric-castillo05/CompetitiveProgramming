#include <bits/stdc++.h>
#define REP(i, a, b) for (unsigned long long int i = a; i < b; ++i)

using namespace std;

typedef unsigned long long int ulli;
const char ln = '\n';

ulli calculate_fibo(ulli &max_arr) {
  ulli prev = 1, curr = 1;
  max_arr %= 60;
  REP(i, 2, max_arr + 1) {
    ulli next = (curr + prev) % 10;
    prev = curr;
    curr = next;
  }
  return curr;
}

void _solve() {
  ulli t, max_arr = 0;

  cin >> t;

  vector<ulli> cases;
  while (t--) {
    ulli n;
    cin >> n;
    cout << calculate_fibo(n) << ln;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  _solve();
  return 0;
}
