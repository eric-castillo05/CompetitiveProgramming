#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int ulli;

const char ln = '\n';


ulli conjecture(ulli n){
  ulli c = 1;
  while(n != 1){
    if (n % 2 != 0){
      n = (3 * n) + 1;
    } else {
      n /= 2;
    }
    c++;
  }
  return c;
}

void _solve() {
  ulli a, b;
  while(cin >> a >> b){
    ulli c = 0;
    for(ulli i = min(a, b); i <= max(a,b); i++) {
      c = max(c, conjecture(i));
      // cout << c << ln;
    }
    cout << a << " " << b << " " << c << ln;
  }

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  _solve();
  return 0;
}
