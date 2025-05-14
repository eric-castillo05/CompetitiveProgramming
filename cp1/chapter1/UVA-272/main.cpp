#include <bits/stdc++.h>

using namespace std;

const char ln = '\n';

void _solve() {
  char c;
  int cont = 0;
  while (cin.get(c)) {
    if (c == '"') {
      cont++;
      if (cont % 2 == 1) {
        cout << "``";
      } else {
        cout << "''";
      }
    } else {
      cout << c;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  _solve();
}
