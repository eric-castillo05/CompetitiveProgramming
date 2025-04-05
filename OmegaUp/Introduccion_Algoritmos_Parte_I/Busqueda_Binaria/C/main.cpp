// 19:11
// 19:14 stop for food
// 22:22
// 23:34
// 11:17
// 11:31
// After many tries, I can conclude the next few things
// 1.- Never forget to use ios_base and cin.tie
// 2.- Review to the last detail your binary search
#include <bits/stdc++.h>
#define REP(i, a, b) \
  for(long long int i = a; i < b; ++i)

using namespace std;
typedef vector<long long> vlli;
typedef long long lli;

const char ln = '\n';

void _solve(){
  lli n, k;
  cin >> n >> k;
  vlli cars(k);
  REP(i, 0, k) {
    cin >> cars[i];
  }
  vlli prefixSum(k + 1, 0);
  // prefixSum[0] = cars[0];
  REP(i, 0, k) {
    prefixSum[i + 1] = prefixSum[i] + cars[i];
    // cout << prefixSum[i] << " ";
  }
  // REP(i, 0, k) {
  //   // prefixSum[i] = prefixSum[i-1] + cars[i];
  //   cout << prefixSum[i] << " ";
  // }

  while (n--) {
    lli g;
    cin >> g;
    lli l = 0, r = k;
    while (l < r) {
      lli mid = l + (r - l) / 2;
      if (prefixSum.at(mid + 1) <= g) {
        l = mid + 1;
      } else {
        r = mid;
      }
    }
    cout << l << " " << g - prefixSum[l] << ln;
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  _solve();
  return 0;
}
