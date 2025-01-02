#include <iostream>
#include <math.h>

using namespace std;

const char ln = '\n';

bool esCapicua(int n){
  int k = 0, aux = n;
  int n_digitos = log10(n) + 1;
  while(aux > 0){
    k += (pow(10, n_digitos-1)) * (aux % 10);
    aux = aux / 10;
    n_digitos--;
  }
  return n == k;
}

int main(){
  int n;
  cin >> n;
  cout << esCapicua(n) << ln;
  return 0;
}
