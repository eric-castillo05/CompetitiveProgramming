#include <bits/stdc++.h>
#define REP(i, a, b) for(int i =a; i < b; ++i)
using namespace std;

typedef long long int lli;
const char ln = '\n';
void _solve(){
  lli n, m, ans = -1;
  cin >> n >> m;
  REP(i, 0, n){
    lli temp;
    cin >> temp;
    if (temp >= m){
      ans = i + 1;
      break;
    }
  }
  cout << ans << ln;
}

int main(){
  _solve();
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
}
