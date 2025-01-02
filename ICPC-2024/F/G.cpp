#include <bits/stdc++.h>
#define REP(i, a, b) for(lli i = a; i < b; i++)
using namespace std;
const char ln = '\n';
typedef long long int lli;

lli gcd(lli a, lli b) {
    while (b != 0) {
        lli temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool cmp(vector<lli>& nums) {
    lli GCD = nums[0];
    REP(i, 1, nums.size()) {
        GCD = gcd(GCD, nums[i]);
    }

    set<lli> uniqueGCDs;
    REP(i, 0, nums.size()) {
        REP(j, i+1, nums.size()) {
            uniqueGCDs.insert(gcd(nums[i], nums[j]));
            if (uniqueGCDs.size() > 1) {
                return false;
            }
        }
    }

    return true;
}

void _solve() {
    lli n;
    cin >> n;
    vector<lli> nums(n);
    REP(i, 0, n) {
        cin >> nums[i];
    }
    if (cmp(nums)) {
        cout << "YES" << ln;
    } else {
        cout << "NO" << ln;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    _solve();
    return 0;
}
