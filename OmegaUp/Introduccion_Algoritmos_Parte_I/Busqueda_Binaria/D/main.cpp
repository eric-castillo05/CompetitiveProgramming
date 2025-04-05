#include <bits/stdc++.h>

using namespace std;
typedef vector<long long int> vlli;
void _solve(){
  int N, P;
  cin >> N >> P;
  // vlli cubiculos(N);
  --P;
  N -= P;
  // cout << N << " " << P;
  cout << N - P;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  _solve();
  return 0;
}
