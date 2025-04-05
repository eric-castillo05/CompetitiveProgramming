#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; ++i)

using namespace std;

typedef vector<int> vi;
const char ln = '\n';

void intercambiar(vi& nums, int a, int b){
  int temp = nums[a];
  nums[a] = nums[b];
  nums[b] = temp;
}

int minOfIndex(vi &nums, int start) {
  int maxIndex = start;
  REP(i, start, nums.size()) {
    if (nums.at(i) > nums.at(maxIndex)) {
      maxIndex = i;
    }
  }
  return maxIndex;
}

void selectionSort(vi& nums){
  REP(i, 0, nums.size()){
    int maxIndex = minOfIndex(nums, i);
    intercambiar(nums, i, maxIndex);
  }
}

void _solve() {
  int n;
  cin >> n;
  vi nums(n);
  REP(i, 0, n) {
    cin >> nums[i];
  }
  selectionSort(nums);
  REP(i, 0, n) {
    cout << nums[i] << ln;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  _solve();
  return 0;
}

