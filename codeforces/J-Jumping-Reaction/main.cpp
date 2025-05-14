#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; ++i)

using namespace std;

const char ln = '\n';
typedef long long int lli;

void calc_prefix(vector<lli>& prefix_sum, vector<lli>& nums, vector<lli>& prefix_square){
  prefix_sum[0] = nums[0];
  prefix_square[0] = nums[0] * nums[0];
  REP(i, 1, nums.size()){
    prefix_sum[i] = prefix_sum[i-1] + nums[i];
    prefix_square[i] = prefix_square[i-1] + (nums[i] *  nums[i]);
    cout << prefix_sum[i] << " " << prefix_square[i] << ln;
  }
}
void _solve() {
  lli n, q;
  cin >> n >> q;
  vector<lli> nums(n), prefix_sum(n), prefix_square(n);
  REP(i, 0, n) { cin >> nums[i]; }
  calc_prefix(prefix_sum, nums, prefix_square);
  while (q--) {
    lli l, r;
    cin >> l >> r;
    lli sum = (prefix_sum[r] - prefix_sum[l-1]);
    lli sum_square = (prefix_square[r] - prefix_square[l-1]);
    lli result = (sum *  sum - sum_square);
    result /= 2;
    cout << result << ln;
  }
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  _solve();
  return 0;
}
