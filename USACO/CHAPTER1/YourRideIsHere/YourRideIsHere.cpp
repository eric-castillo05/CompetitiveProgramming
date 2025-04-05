/*
ID:castler1 
TASK:ride
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;
const char ln = '\n';

void _solve(){
  ofstream fout("ride.out");
  ifstream fin("ride.in");

  string s1, s2;
  int n = 1, k = 1;
  fin >> s1 >> s2;
  cout << s1 << " " << s2 << ln;
  for (char& c : s1) {
    n *= int(c)-64;
  }
  for (char& c : s2) {
    k *= int(c)-64;
  }
  if ((n % 47) == (k % 47)) {
    fout << "GO" << ln;
  } else {
    fout << "STAY" << ln;
  }

}

int main(){
  _solve();
  return 0;
}
