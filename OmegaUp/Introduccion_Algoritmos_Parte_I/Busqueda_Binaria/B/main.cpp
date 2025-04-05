// 18:24
// 18:40 first try - 50%
// 18:35 second try - 75% - use long long int
// 18:53 third try - 100% AC - ulli for negative number will not work properly
// 30 min
#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int ulli;

vector<ulli> fibo;
void generate_fibo(ulli& n){
  fibo.push_back(1);
  fibo.push_back(1);
  ulli i = 1;
  ulli  suma = 0;
  while(suma <= n){
    suma = fibo[i-1] + fibo[i];
    fibo.push_back(suma);
    ++i;
  }
}

long long int binary_search(ulli& n) {
  ulli l = 0, r = fibo.size()-1;
  while(l <= r){
    ulli mid = l + (r - l) / 2;
    if(fibo.at(mid) == n){
      return mid + 1;
    } else if (fibo.at(mid) < n){
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
  return -1;
}

void _solve() {
  ulli n;
  cin >> n;

  cout << endl;
  if (n != 1){
    generate_fibo(n);
    // for (int i = 0; i < fibo.size(); ++i) {
    //   cout << fibo[i] << " ";
    // }
    cout << endl;
    cout << binary_search(n);
  } else {
    cout << 1;
  }


}

int main(){
  _solve();
  return 0;
}
