#include <bits/stdc++.h>
#define REP(i,a,b)for(int i=a;i<b;i++)

using namespace std;

void _solve() {
    int n, p;
    cin >> n >> p;
    vector<int> nums;
    REP(i, 0, n) {
        int k; cin >> k;
        nums.push_back(k);
    }
    int m = -1;
    REP(i, 0, nums.size()) {
        if (nums[i] > m && nums[i] <= p){
            m = nums[i];
        }
    }
    cout << m << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    _solve();
    return 0;
}
