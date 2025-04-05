#include <bits/stdc++.h>

using namespace std;

const char ln = '\n';

void _solve() {
  int izquierda1, abajo1, derecha1, arriba1;
  int izquierda2, abajo2, derecha2, arriba2;

  cin >> izquierda1 >> abajo1 >> derecha1 >> arriba1;
  cin >> izquierda2 >> abajo2 >> derecha2 >> arriba2;

  int izq = max(izquierda1, izquierda2);
  int der = min(derecha1, derecha2);
  int abj = max(abajo1, abajo2);
  int arri = min(arriba1, arriba2);
  int area_int = 0;
  if (izq < der && abj < arri) {
    area_int = (der - izq) * (arri - abj);
  }
  int area1 = (derecha1 - izquierda1) * (arriba1 - abajo1);
  int area2 = (derecha2 - izquierda2) * (arriba2 - abajo2);
  cout << area1 + area2 - area_int << ln;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  _solve();
  return 0;
}
