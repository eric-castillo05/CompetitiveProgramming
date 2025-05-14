#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
const char ln = '\n';

lli countZeros(string s) {
  lli cont = 0, pos = 0;
  bool flag = false;
  for (lli i = s.size() - 1; i >= 0; --i) {
    // cout << s[i] << " ";
    if (s[i] != '0') {
      flag = true;
    }
    if (flag){ pos = i; break; }
  }
  for(lli i = pos; i >= 0; --i){
    if (s[i] != '0'){
      cont++;
    }
  }
  return cont + (s.size() - 1 - pos);
}
void _solve() {
  lli t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    if (s.size() == 1) {
      cout << 0 << ln;
    } else {
      cout << countZeros(s) - 1 << ln;
    }
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  _solve();
  return 0;
}
