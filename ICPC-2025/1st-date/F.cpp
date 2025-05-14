#include <bits/stdc++.h>
#define REP(i, a, b) for(int i =a; i < b; ++i)
using namespace std;

typedef long long int lli;
const char ln = '\n';

struct SegmentTree {
    vector<lli> tree lazy;
    int n;
    SegmentTree(vector<lli>&nums){
        n = nums.size();
        tree.assing(4 * n, 0);
        lazy.assing(4 * n, 0);
        build(nums, 0, 0, n -1);
    }

    void build(vector<lli>& nums, lli node, lli start, lli end){

    }
}

lli find_max(vector<lli>&nums, lli l, lli r){
    lli max_n = 0;
    REP(i, l, r){
        max_n = max(max_n, nums[i]);
    }
    return max_n;
}

void add_one(vector<lli>&nums, lli l, lli r){
    REP(i, l, r){
        nums[i]++;
    }
}

lli max_global(vector<lli>&nums){
    lli max_g = 0;
    REP(i, 0, nums.size()){
        max_g = max(max_g, nums[i]);
    }
    return max_g;
}
void reset_zero(vector<lli>&nums, lli l, lli r){
    lli max_g = max_global(nums);
    REP(i, l, r){
        if(nums[i] == max_g){
            nums[i] = 0;
        }
    }
}

void _solve(){
    lli n, k;
    cin >> n >> k;
    vector<lli> nums(n);
    REP(i, 0, n){
        cin >> nums[i];
    }
    char C;
    lli l, r;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    _solve();
}
