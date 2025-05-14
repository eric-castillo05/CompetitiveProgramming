#include <bits/stdc++.h>
#define REP(i, a, b) for(int i =a; i < b; ++i)
using namespace std;

typedef long long int lli;
const char ln = '\n';

struct SegmentTree {
    vector<lli> tree, lazy;
    int n;
    SegmentTree(vector<lli>&nums){
        n = nums.size();
        tree.assign(4 * n, 0);
        lazy.assign(4 * n, 0);
        build(nums, 0, 0, n -1);
    }

    void build(vector<lli>& nums, lli node, lli start, lli end){
        if (start == end) {
            tree[node] = nums[start];
            return;
        }
        int mid = start + (end - start) / 2;
        build(nums, 2 * node + 1, start, mid);
        build(nums, 2 * node + 2, mid + 1, end);
        tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
    }

    void propagate(lli node, lli start, lli end) {
        if (lazy[node] != 0) {
            tree[node] += lazy[node];
            if (start != end) {
                lazy[2 * node + 1] += lazy[node];
                lazy[2 * node + 2] += lazy[node];
            }
            lazy[node] = 0;
        }
    }

    void update(lli node, lli start, lli end, lli l, lli r, lli val){
        if (start > r || end < l) return;
        propagate(node, start, end);
        if (l <= start && end <= r) {
            lazy[node] += val;
            propagate(node, start, end);
            return;
        }
        int mid = start + (end - start) / 2;
        update(2 * node + 1, start, mid, l, r, val);
        update(2 * node + 2, mid + 1, end, l, r, val);
        tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
    }


    lli query(lli node, lli start, lli end, lli l, lli r) {
        if (start > r || end < l) return LLONG_MIN;
        propagate(node, start, end);
        if (l <= start && end <= r) return tree[node];
        lli mid = start + (end - start) / 2;
        lli left = query(2 * node + 1, start, mid, l, r);
        lli right = query(2 * node + 2, mid + 1, end, l, r);
        return max(left, right);
    }

    void reset_max(lli node, lli start, lli end, lli l, lli r, lli global_max) {
        if (start > r || end < l || tree[node] < global_max) return;
        propagate(node, start, end);
        if (start > r || end < l || tree[node] < global_max) return;
        if (tree[node] < global_max) return;
        if (start == end) {
            if (tree[node] == global_max) {
                tree[node] = 0;
                return;
            }
        }
        lli mid = start + (end - start) / 2;
        reset_max(2 * node + 1, start, mid, l, r, global_max);
        reset_max(2 * node + 2, mid + 1, end, l, r, global_max);
        tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
    }
};

void _solve(){
    lli n, k;
    cin >> n >> k;
    vector<lli> nums(n);
    REP(i, 0, n){
        cin >> nums[i];
    }
    SegmentTree tree(nums);
    char C;
    lli l, r;
    REP(i, 0, k) {
        cin >> C >> l >> r;
        l--; r--;
        if (C == 'Q') {
            cout << tree.query(0, 0, tree.n - 1, l, r) << ln;
        } else if (C == 'A') {
            tree.update(0, 0, tree.n - 1, l, r, 1);
        } else if (C == 'R') {
            lli global_max = tree.query(0, 0, tree.n -1, 0, tree.n - 1);
            tree.reset_max(0, 0, tree.n - 1, l, r, global_max);
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    _solve();
}
