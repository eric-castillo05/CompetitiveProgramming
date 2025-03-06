#include <bits/stdc++.h>
#define REP(i, a, b) \
  for(int i = a; i < b; ++i)

using namespace std;

const char ln = '\n';

void _solve(){
  int n;
  cin >> n;
  vector<int> nums(n);
  REP(i, 0, n){
    cin >> nums[i];
    cout << nums[i] << " ";
  }
  cout << ln;
  REP(i, 0, n) {
    int min = i;
    REP(j, i+1, n) {
      if (nums[i] < nums[j]) {
        min = j;
      }
      // cout << nums[min] << " ";
    }
    swap(nums[i], nums[min]);
  }
  cout << ln;
  REP(i, 0, n) {
    cout << nums[i] << " ";
  }


}
int main(){
  _solve();
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  return 0;
}
