#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; ++i)

using namespace std;

const char ln = '\n';

int calculate_period(int& n){
  if (n <= 1) return n; 
  int prev = 0, curr = 1;
  for (int i = 0; ; ++i){
    int next = (prev + curr) % n;
    cout << next << " ";
    prev = curr;
    curr = next;
    if (curr == 1 && prev == 0){
      return i + 1;
    }
  }
}

void _solve() {
  int n;
  cin >> n;
  cout << calculate_period(n);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  _solve();
  return 0;
}
