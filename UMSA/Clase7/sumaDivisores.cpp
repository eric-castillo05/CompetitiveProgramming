/*
 * Dada una lista de numero retonar la suma de todos
 * los divisores de cada elemento de la lista
 *
 * Input
 * [1, 2, 10]
 *
 * Output
 * [1, 3, 18]
 */

#include <iostream>
#include <vector>

using namespace std;

const char ln = '\n';

int sumDivisores(int n) {
  int sum = 0;
  for (int i = 1; i * i < n; i++) {
    if (n % i == 0) {
      sum += i;
      sum += (n / i);
    }
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> nums(n), ans(n);
  REP(i, 0, n) {
    cin >> nums[i];
    ans[i] = sumDivisores(nums[i]);
  }
  for (int it : ans) {
    cout << it << ln;
  }
  return 0;
}
