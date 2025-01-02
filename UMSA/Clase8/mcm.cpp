/*
 * El minimo comun multiplo se puede calcular como
 * mcm(x, y) = x * y / gcd(x, y);
 */

#include <bits/stdc++.h>

using namespace std;

const char ln = '\n';

int main() {
  int n, k;
  cin >> n >> k;
  cout << (n * k) / __gcd(n, k) << ln;
  return 0;
}
