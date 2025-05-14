#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; ++i)

using namespace std;

const char ln = '\n';
typedef long long int lli;

bool compare (const pair<lli, lli>& a, const pair<lli, lli>& b){
  if (a.first != b.first){
    return a.first < b.first;
  }
  return a.second > b.second;
}
lli search_maxpower(vector<pair<lli, lli>>& nums, lli& n){
  lli max_power = 0;
  lli l = 0, r = 1;
  while(l <= r && r <= nums.size()-1){
    if (nums[l].first + nums[r].second <= n){
      max_power = max(max_power, nums[l].second + nums[r].second);
    } else if (nums[l].first >= n){
      max_power = max(max_power, nums[l].second);
    } else {
      r = l;
      l++;
    }
  }
  return max_power;
}
void _solve(){
  lli t;
  cin >> t;
  while(t--){
    lli c, n;
    cin >> c >> n;
    vector<pair<lli, lli>> nums;
    REP(i, 0, n){
      lli w, f;
      cin >> w >> f;
      nums.push_back(make_pair(w, f));
    }
    sort(nums.begin(), nums.end(), compare);
    cout << search_maxpower(nums, c) << ln;

  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  _solve();
  return 0;
}
